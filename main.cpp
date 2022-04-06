//Student Name: Robert Woolard

//Teacher: Dr. Tyson McMillan

//Date: 04/06/2023

//A program to practice working with multi-dimensional arrays

#include <iostream>
#include <fstream>

using namespace std;

/*

Research Input data: go to http://www.weather.com (Links to an external site.)

Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

//Paris_Tx = 1, Paris_France = 2  Replace City_One and City_Two with the names of your cities

//Data Table

//City X, Day X: Temp

City 1, Day 1: 66

City 1, Day 2: 66

City 1, Day 3: 74

City 1, Day 4: 82

City 1, Day 5: 78

City 1, Day 6: 80

City 1, Day 7: 73

City 2, Day 1: 58

City 2, Day 2: 50

City 2, Day 3: 51

City 2, Day 4: 57

City 2, Day 5: 66

City 2, Day 6: 65

City 2, Day 7: 64

*/

 

int main()

{

      const int CITY = 2;

      const int WEEK = 7;

 

    int temperature[CITY][WEEK];
    

    //Note your input data from the above

    //cout << "Enter all temperature for a week of first city and then second city. \n";

    ifstream f("weather.txt"); //open file for input

    int dayTemp; //read temperature from file
          

    // Inserting the values into the temperature array

    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops

  while(!f.eof()) {
  
  while(f>>dayTemp){  
  
    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)
        
        {

            f >> temperature[i][j]; //place temperatures from the file into the array
            
                            
              
            }

        }

    }
  }

    

    cout << "\n\nDisplaying Values:\n";

 

    // Accessing the values from the temperature array

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;

        }

    }

  cout << "\n\n";

  int cityOne[7] = {66,66,74,82,78,80,73}; //creating populated arrays
  int cityTwo[7] = {58,50,51,57,66,65,64};

  for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)
        
        {

           temperature[0][j] = cityOne[j]; //populating city one temperature array
           temperature[1][j] = cityTwo[j]; //populating city two temperature array
                            
              
        }

    }

  

  for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {
                      
           cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;

            }
        }

    




   /*For up to 5 Points Extra Credit

      Expand this program:

      1. Create a one dimensional array, cityOne[7] to store the 7 temperatures of city 1, assume that value 0 represents day 1, 1 represents day 2....

      2. Create a on dimensional array, cityTwo[7] to store the 7 temperatures of city 2 , assume that value 0 represents day 1, 1 represents day 2....

      3. Using a for loop (or nested for loop), feed the data of CityOne[] and CityTwo[] into temperature[i][j], where i is index of the City Number, and j is the index of the temp for the day.

      4. print the results of temperature[i][j]; to the screen.

    */

 
  f.close(); //close the file
 

    return 0;

}