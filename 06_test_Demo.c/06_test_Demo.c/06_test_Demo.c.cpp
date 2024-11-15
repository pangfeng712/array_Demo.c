//将100个随机数导入数组，要求不重复
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int res(int num, int arr[], int len);
int main()
{
	int arr[100] = { 0 };
	int len = sizeof(arr) / sizeof(int);

	srand(time(NULL));
	for (int i = 0; i < len;)
	{
		int num=rand() % 100+1;
		int flag = res(num, arr, len);
		if (!flag)//等于flag==0
		{
			arr[i] = num;
			i++;
		}

	}
	for (int i = 0; i < len; i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}

int res(int num,int arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == num)
		{
			return 1;
		}
	}return 0;
}