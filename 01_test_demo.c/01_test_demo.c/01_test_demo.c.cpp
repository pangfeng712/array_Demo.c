//1.找出数组中最大值

#include<stdio.h>
int main()
{
	int arr1[] = { 33,5,22,44,55,435,22};//定义数组
	int max = arr1[0];//定义变量max，记录数组中最大值（一定要是数组中的值

	int len = sizeof(arr1) / sizeof(arr1[0]);
	for (int i = 1; i < len; i++)//循环可以从索引1开始，因为max就是索引0
	{
		int num = arr1[i];
		if (max < num)
		{
			max = num;
		}
	}
	printf("%d\n",max);
	return 0;
}