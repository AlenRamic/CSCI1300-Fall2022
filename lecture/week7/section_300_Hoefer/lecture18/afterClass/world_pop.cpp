/* Section 8.2.3 Page 267 */

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cctype>

using namespace std;

int main()
{
   // store data in three arrays
   // array of strings to hold the country names
   string names[250];

   // array of ints, to hold the population
   int population[250];

   // array of ints, to hold the area
   int areas[250];

   // read data from the file into the arrays
   ifstream in_file;
   in_file.open("world_population.csv");

   if (in_file.is_open())
   {
      // read lines from the file
      cout << "we found the file" << endl;
      string temp;
      getline(in_file, temp);
      cout << temp << endl;

      int index = 0;

      char my_char;
      string temp_name;
      while (in_file.get(my_char))
      {
         // Afghanistan,38928346,652860
         if (my_char == ',')
         {
            cout << "comma found!" << endl;
            names[index] = temp_name;
            temp_name = "";

            // at this point we have 38928346,652860 left in the stream for the line
            int temp_pop; 
            in_file >> temp_pop;
            cout << "population " << temp_pop << endl;
            population[index] = temp_pop;

            // at this point we have ,652860 left in the stream for the line
            in_file.get(my_char);

            // at this point we have 652860 left in the stream for the line
            int temp_area;
            in_file >> temp_area;
            areas[index] = temp_area;
            cout << "area " << temp_area << endl;

            // clears out newline character
            in_file.get(my_char);
            index++;

         } else{
            // copy the character into a string
            temp_name += my_char;
         }
      }

   } else{
      cout << "Can't find the file" << endl;
   }




    return 0;
}
