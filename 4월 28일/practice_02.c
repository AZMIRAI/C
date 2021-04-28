#include <stdio.h>
int add(int a, int b)
{ return a + b; }
int sub(int a, int b)
{ return a - b; }
int main(void)
{
 int a=10, b=20, s = 0;
 int(*fn)(int, int) = NULL;

 printf("add(1) or subtraction(2): ");
 scanf_s("%d", &s);
 if (s == 1)
 fn = add;
 else if (s == 2)
 fn = sub;
 printf("%d\n", fn(a, b));
 return 0;
}