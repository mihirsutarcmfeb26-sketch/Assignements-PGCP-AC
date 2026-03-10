#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int *arr;

    // allocate memory for 5 integers
    arr = (int*) malloc(5 * sizeof(int));

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

    // free memory
    free(arr);

    return 0;
}