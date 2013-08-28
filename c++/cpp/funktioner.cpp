#include <iostream>

using namespace std;

//Definera funktionen abs.
//Funktionen tar 1 argument, en integer
//och returnerar en integer
int abs(int x){
	if (x < 0) {
		return -x;
	} else {
		return x;
	}
}

int main(){
	int tal;
	cout <<  "Skriv ett tal: " << endl;
	cin >> tal;
	cout << "Beloppet av ditt tal är " << abs(tal) << endl;
}
