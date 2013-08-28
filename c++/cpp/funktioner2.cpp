#include <iostream>

using namespace std;

//Deklarera en global variabel
int counter;

void addToCounter (int num) {
	//Addera num till counter
    counter += num;
    //cout kan användas här också
	cout << "Summan av alla tal är nu: " << counter << endl;
}

int main () {
    //Den här loopen kommer att köra i all oändlighet (tills du avslutar programmet)
	while (true) {
        //Läs in ett tal
		int tal;
		cout << "Skriv ett tal: "<< endl;
		cin >> tal;
        
        //Anropa funktionen för att addera /tal/ till counter
		addToCounter (tal);
	}
}