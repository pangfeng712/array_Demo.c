//冒泡排序
#include<stdio.h>
int main()
{
	int arr[] = { 9,7,2,4,6,1,5 };
	int len = sizeof(arr) / sizeof(int);

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - 1-i; j++)//减i是因为每循环一次，最右边的值固定了
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < len; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}