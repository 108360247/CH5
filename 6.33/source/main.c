#include <stdio.h>
#include <stdlib.h>

int binarysearch(int[], int, int);

int main(void)
{
	int search, ans;
	int data[] = { 1,5,8,15,20,37,48,55,61,77,80,98,100};

	printf("Please enter a number which you want to find: ");
	scanf_s("%d", &search);

	ans = binarysearch(data, search, sizeof(data) / sizeof(int));

	if (ans < 0)
	{
		printf("not found %d\n", search);
	}
	else
	{
		printf("data[%d] is  %d\n", ans , search);
	}

	system("pause");
}

int binarysearch(int data[], int search, int n)
{
	int low = 0, high = n - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (data[mid] == search)
		{
			return mid;
		}
		else if (data[mid] > search)
		{
			high = mid - 1;
		}
		else if (data[mid] < search)
		{
			low = mid + 1;
		}
	}

	return -1;
}