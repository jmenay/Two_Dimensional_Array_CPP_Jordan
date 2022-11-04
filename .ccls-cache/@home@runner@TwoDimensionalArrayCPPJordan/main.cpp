//Student Name:
//Teacher: Dr. Tyson McMillan
//Date:
//A program to practice working with multi-dimensional arrays
#include <iostream>
using namespace std;
/*
Research Input data: go to http://www.weather.com Links to an external site.
Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.
//City_One = 1, City_Two = 2  Replace City_One and City_Two with the names of your cities
//Data Table
//City X, Day X: Temp
City 1, Day 1: TEMP  81
City 1, Day 2: TEMP  82
City 1, Day 3: TEMP  83
City 1, Day 4: TEMP  83
City 1, Day 5: TEMP  80
City 1, Day 6: TEMP  73
City 1, Day 7: TEMP  65
City 2, Day 1: TEMP  75
City 2, Day 2: TEMP  74
City 2, Day 3: TEMP  56
City 2, Day 4: TEMP  51  
City 2, Day 5: TEMP  64
City 2, Day 6: TEMP  67
City 2, Day 7: TEMP  59
*/
 
int main()
{
      const int CITY = 2;
      const int WEEK = 7;
 
    int temperature[CITY][WEEK];
    //Note your input data from the above
    cout << "Enter all temperature for a week of first city and then second city. \n";
 
    // Inserting the values into the temperature array
    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops
    for (int i = 0; i < CITY; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";
            cin >> temperature[i][j];
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
   /*For up to 5 Points Extra Credit
      Expand this program:
      1. Create a one dimensional array, cityOne[7] to store the 7 temperatures of city 1, assume that value 0 represents day 1, 1 represents day 2....
      2. Create a one dimensional array, cityTwo[7] to store the 7 temperatures of city 2 , assume that value 0 represents day 1, 1 represents day 2....
      3. Using a for loop (or nested for loop), feed the data of CityOne[] and CityTwo[] into temperature[i][j], where i is index of the City Number, and j is the index of the temp for the day.
      4. print the results of temperature[i][j]; to the screen.
    */
 
 
    return 0;
}
