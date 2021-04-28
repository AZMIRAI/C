#include <stdio.h>
int add(int a, int b)
{ return a + b; }
int sub(int a, int b)
{ return a - b; }
int main(void)
{
int a=10, b=20, s = 0;
 int(*fnarr[2])(int, int) = { add, sub };

 printf("add(1) or subtraction(2): ");
 scanf_s("%d", &s);
 printf("%d\n", fnarr[s - 1](a, b));
 return 0;
}