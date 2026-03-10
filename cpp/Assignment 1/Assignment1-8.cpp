#include <iostream>
using namespace std;

int absolute(int n) {
    return (n < 0) ? -n : n;
}

int clamp(int val, int lo, int hi) {
    return (val < lo) ? lo : (val > hi) ? hi : val;
}

int main() {

    int values[] = {-15, 0, 25, -3};
    int los[]    = {-10, -10, -10, 0};
    int his[]    = {10, 10, 10, 5};

    cout << "val\tlo\thi\tabsolute(val)\tclamp(val,lo,hi)\n";
    cout << "----------------------------------------------------------\n";

    for(int i = 0; i < 4; i++) {
        cout << values[i] << "\t"
             << los[i] << "\t"
             << his[i] << "\t"
             << absolute(values[i]) << "\t\t"
             << clamp(values[i], los[i], his[i]) << "\n";
    }

    return 0;
}
//output:
//val     lo      hi      absolute(val)   clamp(val,lo,hi)
//----------------------------------------------------------
//-15     -10     10      15              -10
//0       -10     10      0               0
//25      -10     10      25              10
//-3      0       5       3               0