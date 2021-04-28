#include <stdio.h>
#함수 포인터 타입을 반환하는 함수
typedef int (*func)(int, int);
int add(int a, int b)
{
 return a + b;
}
int sub(int a, int b)
{
 return a - b;
}

func getFunction(int selection)
{
 if (selection == 1)
 return add;
 else
 return sub;
}
int main(void)
{
 printf("%d\n", getFunction(1)(1, 2));
 return 0;
}