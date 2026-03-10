#include <stdio.h>
int doubleIt(int &n) {
 n = n * 2;
 printf("Inside doubleIt: %d\n", n);
}
int main() {
 int num = 7;
 doubleIt(num);
 printf("In main after call: %d\n", num);
 return 0;
}
//output:
//Inside doubleIt: 14
//In main after call: 14