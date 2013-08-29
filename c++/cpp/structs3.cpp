
// Antag att denna vektor är fylld med koordinaterna
vector<Point> pts;

bool changed = true;
if (changed) {
    changed = false;
    for (int i=0;i<pts.size()-1;i++) {
        // Kopiera punkterna till lokala variabler så slipper vi skriva om index hela tiden.
        Point p1 = pts[i];
        Point p2 = pts[i+1];
        if (p1.x > p2.x || (p1.x == p2.x && (p1.y > p2.y || (p1.y == p2.y && p1.z > p2.z)))) {
            changed = true;

            // Byt plats på punkterna
            pts[i+1] = p1;
            pts[i] = p2;
        }
    }
}