#include<stdio.h>
#include<stdlib.h>

void stringreverse(int start, char string[]) 
{ 
	if (string[start + 1] != NULL)
	{               
		stringreverse(start + 1, string);   
	}
	printf("%c", string[start]);   

}

int main(void) 
{
	printf("Please enter a string:");     
	char string[100];                     
	scanf_s("%s", string,100);
	printf("\n");
	stringreverse(0, string);   
	printf("\n");
	system("pause");
	return 0;                           
}