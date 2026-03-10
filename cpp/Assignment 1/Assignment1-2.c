#include <stdio.h>
int main()
{
    short int a;
    int b;
    long int c; 
    long long int d; 
    unsigned int e;
    float f;
    double g;
    long double h;
    char i;
    printf("size of short int :%zu\n", sizeof(a));
    printf("Size of int: %zu\n", sizeof(b));
    printf("Size of long int: %zu\n", sizeof(c));
    printf("Size of long long int: %zu\n", sizeof(d));
    printf("Size of unsigned int: %zu\n", sizeof(e));
    printf("Size of float: %zu\n", sizeof(f));
    printf("Size of double: %zu\n", sizeof(g));
    printf("Size of long double: %zu\n", sizeof(h));
    printf("Size of char: %zu\n", sizeof(i));
}
//output:
//size of short int :2
//Size of int: 4
//Size of long int: 4
//Size of long long int: 8
//Size of unsigned int: 4
//Size of float: 4
//Size of double: 8
//Size of long double: 16
//Size of char: 1
