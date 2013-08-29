Point a;
a.x = 5;

Point b = a;
b.x = 7;

// Detta kommer att printa 5 7, inte 7 7 som man kanske skulle kunna tro
cout << a.x << " " << b.x;