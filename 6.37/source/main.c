#include<stdio.h>
#include<stdlib.h>

int recursiveMaximun(int a[]);

int main(void)
{
	int a[10] = {1,3,5,7,9,2,4,6,8,10 };
	int m=0;
	m=recursiveMaximun(a);
	printf("max:%d\n", m);
	system("pause");
	return 0;
}

int recursiveMaximun(int a[])
{
	int max=0;
	for (int i = 0; i < 10; i++)
	{
		if (a[i]>max)
		{
			max = a[i];
		}
	}
	return max;
}