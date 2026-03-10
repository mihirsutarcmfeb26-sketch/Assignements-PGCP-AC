#include <iostream>
using namespace std;

int main()
{
    int *arr;

    // allocate memory for 5 integers
    arr = new int[5];

    cout << "Enter 5 numbers:" << endl;

    // input
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Array values:" << endl;

    // print
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    // deallocate memory
    delete[] arr;

    return 0;
}