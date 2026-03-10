#include <iostream>
using namespace std;
void findMinMax(int a, int b, int c, int &minVal, int &maxVal) {
    minVal = a;
    maxVal = a;

    if (b < minVal) minVal = b;
    if (b > maxVal) maxVal = b;

    if (c < minVal) minVal = c;
    if (c > maxVal) maxVal = c;
}

int main() {
    int lo, hi;  
    int x = 12, y = 45, z = 7;
    findMinMax(x, y, z, lo, hi);

    cout << "Values: " << x << ", " << y << ", " << z << endl;
    cout << "Minimum: " << lo << endl;
    cout << "Maximum: " << hi << endl;

    return 0;
}
//output:
//Values: 12, 45, 7
//Minimum: 7
//Maximum: 45