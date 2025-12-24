#include<iostream>
#include"change.h"
#include<iomanip>
using namespace std;
int main() {
	cout << left; 
	cout << setw(12) << "Celsius"<< setw(12) << "Fahrenheit"<< "|   "<< setw(15) << "Fahrenheit"<< "Celsius" << endl;
	double cel = 40.0, fah = 120.0;
	for (int i = 0;i < 10;i++)
	{
		double fahr = celsius_to_fah(cel);
		double cels = fahrenheit_to_cels(fah);
		cout << setw(12) << fixed << setprecision(1) << cel<< setw(12) << fixed << setprecision(1) <<fahr<< "|   "	<< setw(15) << fixed << setprecision(1) << fah	<< fixed << setprecision(2) << cels << endl;
		cel -= 1.0;
		fah -= 10.0;
	}
	return 0;
}