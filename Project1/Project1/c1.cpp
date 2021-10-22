#include <stdio.h>
int sum(int, int);

int main()
{
	int a=3,b=3;
	int c = a*2+b;
	if(a>5)
	{
		printf("!!!!");
	}
	sum(c, 2);
	printf("a+b=%d", a + b); //¶Ïµã
	int d = c * 2;
	printf("c*2=%d", d);
	printf("Hello world!");
	printf("Second!");
	return 0;
}


int sum(int a, int b)
{
	return a + b;
}