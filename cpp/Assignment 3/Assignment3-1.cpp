#include <iostream>
using namespace std;

int main()
{
    int num = 10;      // integer variable

    int *ptr = &num;   // pointer pointing to num
    int &ref = num;    // reference to num

    cout << "Initial value: " << num << endl;

    // modify using pointer
    *ptr = 20;
    cout << "After modifying using pointer: " << num << endl;

    // modify using reference
    ref = 30;
    cout << "After modifying using reference: " << num << endl;

    return 0;
}