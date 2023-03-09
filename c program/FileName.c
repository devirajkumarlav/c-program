#include<stdio.h>
int main()
{
	printf("hi");
	int a , b;
	printf("enter two value\n");
	scanf_s("%d %d \n", & a ,& b);
	printf("%d%d", a, b);
	fprintf("%d%dadd\n", a + b);

}