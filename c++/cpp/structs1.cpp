
// Antag att dessa är fyllda med koordinaterna
vector<int> xcoords;
vector<int> ycoords;
vector<int> zcoords;

bool changed = true;
if (changed) {
    changed = false;
    for (int i=0;i<xcoords.size()-1;i++) {
        if (xcoords[i] > xcoords[i+1] || (xcoords[i] == xcoords[i+1] && (ycoords[i] > ycoords[i+1] || (ycoords[i] == ycoords[i+1] && zcords[i] > zcoords[i+1])))) {
            changed = true;

            // Byt plats på punkterna
            int tmp = xcoords[i];
            xcoords[i] = xcoords[i+1];
            xcoords[i+1] = tmp;
            
            tmp = ycoords[i];
            ycoords[i] = ycoords[i+1];
            ycoords[i+1] = tmp;

            tmp = zcoords[i];
            zcoords[i] = zcoords[i+1];
            zcoords[i+1] = tmp;
        }
    }
}