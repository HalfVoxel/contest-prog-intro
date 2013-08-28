#include <iostream>

using namespace std;

int main(){
    int a;
    cout << "Skriv in ett heltal: ";
    cin >> a;
    //Vi sparar ursprungsvärdet
    int originalA = a;
    
    //Notera att vi använder två '=' tecken.
    //Endast 1 '=' tecken är tilldelning
    //2 stycken kollar om två uttryck är identiska och ger true eller false
    if(a == 1){
        a = a;
    }
    //Vi utnyttjar här att om resten vid division med 2 är 0
    //så är talet jämnt.
    else if(a % 2 == 0){
        a = a / 2;
    } else {
        a = 3 * a + 1;
    }
    cout << "f(" << originalA << ") = " << a << endl;
}
