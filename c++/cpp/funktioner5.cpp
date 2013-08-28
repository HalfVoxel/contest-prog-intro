#include<iostream>
using namespace std;

//x kommer att skickas som värde
void loseTheGame (int x) {
	x = 0;
}

//x kommer att skickas som referens
void winTheGame (int &x) {
	x = 42;
}

int main () {
	cout << "Skriv godtyckligt nummer" << endl;
	int x;
	cin >> x;
	//Anropa funktionerna och logga output
	cout << "X är nu " << x << endl;
	loseTheGame (x);
	cout << "X är nu " << x << endl;
	winTheGame (x);
	cout << "X är nu " << x << endl;
}
