/* Section 8.2.3 Page 267 */

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cctype>

using namespace std;

struct Country
{
   string name;
   int area;
   int population;

   double calculate_density()
   {
      return static_cast<double>(population) / area;
   }
};

int main()
{
   // store data in three arrays
   // array of strings to hold the country names
   string names[250];

   // array of ints, to hold the population
   int population[250];

   // array of ints, to hold the area
   int areas[250];

   // create an array of countries
   Country my_countries[250];

   // read data from the file into the arrays
   ifstream in_file;
   in_file.open("world_population.csv");

   string header_string;

   // keep track of number of countries
   int index = 0;

   if (in_file.is_open())
   {
      // read lines from the file
      cout << "we found the file" << endl;
      
      getline(in_file, header_string);
      // cout << header_string << endl;

      

      char my_char;
      string temp_name;
      while (in_file.get(my_char))
      {
         // Afghanistan,38928346,652860
         if (my_char == ',')
         {
            Country temp_country;

            // cout << "comma found!" << endl;
            cout << temp_name << endl;
            names[index] = temp_name;
            temp_country.name = temp_name;
            temp_name = "";

            // at this point we have 38928346,652860 left in the stream for the line
            int temp_pop; 
            in_file >> temp_pop;
            cout << "population " << temp_pop << endl;
            population[index] = temp_pop;
            temp_country.population = temp_pop;

            // at this point we have ,652860 left in the stream for the line
            in_file.get(my_char);

            // at this point we have 652860 left in the stream for the line
            int temp_area;
            in_file >> temp_area;
            areas[index] = temp_area;
            temp_country.area = temp_area;
            cout << "area " << temp_area << endl;

            // clears out newline character
            // on windows... there are TWO newline characters?!?!.... so replace this with a getline call.
            // in_file.get(my_char);
            // in_file.get(my_char);
            string garbage;
            getline(in_file, garbage);

            // save to countries array
            my_countries[index] = temp_country;

            index++;

         } else{
            // copy the character into a string
            temp_name += my_char;
         }
      }

   } else{
      cout << "Can't find the file" << endl;
   }


   ofstream out_file;
   out_file.open("pop_dense.csv");

   out_file << "Country/Other,Population (2020),Land Area,Population Density" << endl;

   
   for (int i = 0; i < index; i++)
   {
      out_file << my_countries[i].name << "," 
            << my_countries[i].population << "," << my_countries[i].area << ","
            << my_countries[i].calculate_density() << endl;
   }




    return 0;
}
