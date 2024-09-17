//Calculating energy drink numbers
#include <iostream>
using namespace std;

int SurveyCount = 16500;
int MultiBuy = 15;
int Citrusphiles = 58;

int main()
{
  double MultiBuyCount = SurveyCount * MultiBuy / 100;
  double CitrusphilesCount = SurveyCount * Citrusphiles / 100;

  cout << "The approximate number of customers purchasing one or more energy drinks per week is " << MultiBuyCount << endl;
  cout << "The approximate number of customers that prefer citrus flavored energy drinks is " << CitrusphilesCount << endl;
} 