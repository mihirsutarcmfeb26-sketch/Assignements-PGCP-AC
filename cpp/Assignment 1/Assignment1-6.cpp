#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 20, z = 30;
    int *px = &x;
    int *py = &y;
    int *pz = &z;

    cout << "Before swap:" << endl;
    cout << "x = " << *px << ", y = " << *py << ", z = " << *pz << endl;
    cout << "px points to address: " << px << endl;
    cout << "py points to address: " << py << endl;
    cout << "pz points to address: " << pz << endl;

    int temp = *px;   
    *px = *pz;       
    *pz = temp;       

    cout << "\nAfter swap:" << endl;
    cout << "x = " << *px << ", y = " << *py << ", z = " << *pz << endl;
    cout << "px points to address: " << px << endl;
    cout << "py points to address: " << py << endl;
    cout << "pz points to address: " << pz << endl;

    return 0;
}
//output:
//Before swap:
//x = 10, y = 20, z = 30
//px points to address: 0x78fe30
//py points to address: 0x78fe2c
//pz points to address: 0x78fe28
//
//After swap:
//x = 30, y = 20, z = 10
//px points to address: 0x78fe30
//py points to address: 0x78fe2c
//pz points to address: 0x78fe28