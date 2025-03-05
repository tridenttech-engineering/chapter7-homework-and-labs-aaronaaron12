//Lab7-3.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
      int day = 0;
      int totalTexts = 0;
      int dailyTexts = 0;
      double average = 0;

      while (day < 7)
      { cout << "Enter the number of texts sent on day " << day + 1 << "? ";
        cin >> dailyTexts;
        totalTexts += dailyTexts;
        day += 1; 

  

      }  //end while
      average = static_cast<double>(totalTexts) / (7);
      cout<< fixed << setprecision(0);
      cout<< endl << "You sent approx " << average << " texts per day." << endl;
      return 0;

    return 0;
}   //end of main function