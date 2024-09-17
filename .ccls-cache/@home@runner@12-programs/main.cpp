//Calculating distance with a tank of gas
#include <iostream>
using namespace std;

int GasTank=20;
double TownGallons=23.5;
double HywyGallons=28.9;

int main()
{
  double TownDistance = GasTank*TownGallons;
  double HywyDistance = GasTank*HywyGallons;

  cout << "you can go " << TownDistance << " miles on a full tank of gas in town" << endl;
  cout << "you can go " << HywyDistance << " miles on a full tank of gas on the highway" << endl;
}