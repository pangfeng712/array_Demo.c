#include<stdio.h>
int order(int arr[], int len, int num);
int main()
{
	int arr[5] = { 22,33,44,55,66 };
	int len = sizeof(arr) / sizeof(int);

	int num = 33;
	
    int index = order(arr, len, num);
	
	printf("%d\n",index);
	return 0;
}
int order(int arr[], int len,int num)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == num)
		{
			return i;
		}
	}
	return 0;
}