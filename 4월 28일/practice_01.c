#include <stdio.h>
int add(int a, int b)
{ return a + b; }
int sub(int a, int b)
{ return a - b; }
int main(void)
{
 int a=10, b=20;
 int(*fn)(int, int) = NULL;

 fn = add;
 printf("%d\n", fn(a, b));
 fn = sub;
 printf("%d\n", fn(a, b));
 return 0;
}