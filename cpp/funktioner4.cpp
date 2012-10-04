#include<iostream>

using namespace std;

//Den rekursiva funktionen
int f (int x) {
	//Skriv ut det nuvarande talet
	cout << " ==> " << x;
	
	//Avbryt om x <= 5
	if (x <= 5) {
		return x;

	//Om x är jämnt (dvs om resten när man delar med 2 är 0)
	//Anropa funktionen igen med andra argument
	} else if (x % 2 == 0) {
		return f (x/2);

	//Annars så är talet udda
	//Anropa funktionen igen med andra argument
	} else {
		return f ((x-1)*2);
	}	
}

int main () {
	//Läs input
	cout << "Skriv ett nummer" << endl;
	int n;
	cin >> n;
	
	//Anropa funktionen
	int result = f (n);
	cout << endl << "Resultatet blev " << result << endl;
}
