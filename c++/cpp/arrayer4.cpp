#include <iostream>
#include <string>

using namespace std;

//Två arrayer med relativ förflyttning i alla 8 riktingar:
int deltaX[] = {0, 0, 1, -1, 1, 1, -1, -1};
int deltaY[] = {1, -1, 0, 0, -1, 1, 1, -1};
//Här visar vi vilken riktning som motsvarar vilken
//närliggande ruta
//615
//3x2
//704

int rader, kolumner; //Storleken på fältet

//Vi använder här en funktion för att kontrollera om ett koordinatpar
//ligger inom fältet. Detta är sant om raden ligger i intervallet
//[0, rader) och kolumnen i intervallet [0, kolumner).
bool withinBounds(int rad, int kolumn){
	return rad >= 0 && kolumn >= 0 && rad < rader && kolumn < kolumner;
}

int main(){
	//Fråga efter storleken på rutnätet
	cout << "Hur många rader har rutnätet?" << endl;
	cin >> rader;
	cout << "Hur många kolumner har rutnätet?" << endl;
	cin >> kolumner;
	//Här deklarerar vi en två-dimensionll array med storleken
	//rader*kolumner
	char grid[rader][kolumner];
	

	//Läs in varje rad i rutnätet:
	for(int i = 0; i < rader; i++){
		//Exempel på rad: ...*..*....*..
		cout << "Skriv in rad " << (i + 1) << endl;
		string rad;
		cin >> rad;

		for(int j = 0; j < kolumner; j++){
			//Här tilldelar vi elementet på rad i och kolumn j
			grid[i][j] = rad[j];
		}
	}

	//Nu kommer det svåra: räkna ut hur många minor som är runt om varje ruta:
	int mines[rader][kolumner];
	for(int i = 0; i < rader; i++){
		for(int j = 0; j < kolumner; j++){
			//Vi får inte glömma att arrayen ursprungligen har massa slumpmässig data, och vi måste sätta den till 0:
			mines[i][j] = 0;

			//För att räkna ut hur många minor som är kring en viss ruta,
			//loopar vi igenom de 8 närliggande rutorna:
			for(int delta = 0; delta < 8; delta++){
				int newX = i + deltaX[delta];
				int newY = j + deltaY[delta];
				//Om denna närliggande ruta existerar, och är en mina så ökar vi antalet minor
				if(withinBounds(newX, newY) && grid[newX][newY] == '*'){
					mines[i][j]++;
				}
			}
		}
	}

	//Vi skriver sedan ut det nya brädet, med antalet minor:
	for(int i = 0; i < rader; i++){
		for(int j = 0; j < kolumner; j++){
			if(grid[i][j] == '*'){
				//Om rutan är en mina, skriver vi ut den som den är.
				cout << '*';
			} else if(mines[i][j] == 0){
				//Om rutan inte hade några närliggande minor skriver vi ut en punkt.
				cout << '.';
			} else {
				//Annars skriver vi ut hur många minor som fanns:
				cout << mines[i][j];
			}
		}
		//I slutet av varje rad får vi inte glömma att skriva ut en nyrad:
		cout << endl;
	}
}