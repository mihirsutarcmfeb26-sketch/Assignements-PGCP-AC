#include <iostream>
using namespace std;

// Swap by Value
void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Swap by Address
void swapByAddress(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Swap by Reference
void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;

    cout << "Original values: " << x << " " << y << endl;

    swapByValue(x, y);
    cout << "After swapByValue: " << x << " " << y << endl;

    swapByAddress(&x, &y);
    cout << "After swapByAddress: " << x << " " << y << endl;

    swapByReference(x, y);
    cout << "After swapByReference: " << x << " " << y << endl;

    return 0;
}