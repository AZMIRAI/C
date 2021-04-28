#include <stdio.h>
#사용자에게서 입력을 입력 받아 다음 처리를 한다.
#선택 : 1-4사이의 수를 입력
#1 – 더하기 (a+b)
#2 – 빼기 (a-b)
#3 – 곱하기 (a*b)
#4 - %연산 (a%b)
#각 함수는 int function (int, int)의 형태.
#함수 포인터를 반환하는 함수를 작성하여 사용자의 입력 및 추가 숫자 입력을 받아 결과를 출력.

typedef int (*func)(int, int);
int add(int a, int b)
{ return a + b; }
int sub(int a, int b)
{ return a - b; }
int multi(int a, int b)
{ return a*b; }
int mod(int a, int b)
{ return a%b; }

func getFunction(int selection)
{
 switch (selection)
 {
 case 1:
 default:
 return add;
 case 2:
 return sub;
 case 3:
 return multi;
 case 4:
 return mod;
 }
}

int main(void)
{
 int s = 0, a, b;
 printf("Select Operation(1-4):");
 scanf_s("%d", &s);
 printf("Enter first integer: ");
 scanf_s("%d", &a);
 printf("Enter second integer: ");
 scanf_s("%d", &b);
 printf("%d\n", getFunction(s)(a, b));
 return 0;
}