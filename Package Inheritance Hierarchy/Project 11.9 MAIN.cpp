//11.9 main 12/25/2021
#include <iostream>
#include <iomanip>
using namespace std;
#include "package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main()
{
const int SIZE = 3;
cout << fixed << setprecision(2);

Package package1("Kelly Huffman", "26,Willison street", "Brooklyn","New york", "12228", "Mike", "23,Jay Street", "Queens", "New york","53455", 20.00,.55);
TwoDayPackage package2("Lando Norris", "27561 Stanford Dr", "Temecula"," California", " 92591", "Daniel Ricardo ", "12944 Arthur St", "Pensacola", "Florida"," 32506", 5.00,.75,.25);
OvernightPackage package3("James bond", "815 Sea Spray Ln", "San Mateo"," California", "22548", "Lewis Hamilton", "2802 , Beechtree Ln", "Woodbridge", "Virginia","22191", 8.25, .35,.70 );

Package* packages[3] = { &package1, &package2,&package3 };
cout << "*******************" << endl;

cout << "Package delivery information list" << endl;
for (int i = 0; i < SIZE; i++) {
cout << "\nPackage " << (i + 1) << ":" << endl;
cout << "Sender :" << endl;
cout << packages[i]->getsenderName() << "\n";
cout << packages[i]->getsenderAddress() << "\n";
cout << packages[i]->getSendCity() << "\n";
cout << packages[i]->getsenderState() << "\n";
cout << packages[i]->getsenderZIP() << "\n";
cout << "\n";
cout << "Recipient :" << endl;
cout << packages[i]->getrecipientName() << "\n";
cout << packages[i]->getsenderAddress() << "\n";
cout << packages[i]->getrecipientCity() << "\n";
cout << packages[i]->getrecipientState() << "\n";
cout << packages[i]->getrecipientZIP() << "\n";
cout << "\n";
cout << "Cost: $" << packages[i]->calculateCost() << endl;
cout << "*************" << endl;

}	
return 0;
}

