#include <iostream>
//Inkludera math för att kunna använda funktionen sqrt (square root)
#include <math.h>

using namespace std;

//Funktionen tar tre argument, alla doubles
//Funktionen returnerar en double
double areaOfTriangle (double a, double b, double c) {
	//Använder Herons formel
	double p = 0.5 * (a+b+c);
	return sqrt (p*(p-a)*(p-b)*(p-c));
}

int main () {
	while (true) {
		double a,b,c;
		cout << "Skriv in sidlängderna på en trianglel" << endl;
		cin >> a >> b >> c;
		cout << "Arean är: " << areaOfTriangle (a,b,c) << endl;
	}
}
