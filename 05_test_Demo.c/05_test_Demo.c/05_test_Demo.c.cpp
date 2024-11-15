//定义一个数组，存入1~5
//要求打乱数组中所有数据的顺序

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void printARR(int arr[], int len);
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int len = sizeof(arr) / sizeof(int);
	printARR(arr, len);
	printf("---------------------\n");

	srand(time(NULL));
	for (int i = 0; i < len; i++)
	{
		int index = rand() % 5;
		int temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;//保证原来的数字不会消失
	}
	printARR(arr, len);
	

	return 0;
}

void printARR(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n",arr[i]);
	}
}