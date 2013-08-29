struct Point {
    int x;
    int y;
    int z;

    // Metod för att kolla om punkten befinner sig i origo
    bool isZero () {
        return x == 0 && y == 0 && z == 0;
    }

// Notera semikolon när structen avslutas
};

int main () {

    // Deklarera en variabel med typen "Point"
    Point p;
    cin >> p.x >> p.y >> p.z;

    // Anropa funktioner på en struct gör du som variabel.metod (...)
    if (p.isZero()) {
        cout << "Din punkt ligger i origo";
    } else {
        cout << "Din punkt ligger inte i origo";
    }

    return 0;
}