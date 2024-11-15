//键盘录入5个数据并存入数组，完成以下需求
//1）遍历数组
//2）反转数组
//3）再次遍历

#include<stdio.h>
void printA(int arr[], int len);
int main()
{
	int arr[5] = {0};
	int len = sizeof(arr) / sizeof(int);
	for (int i = 0; i < len; i++)
	{
		printf("输入的第%d个数是:",i+1);//第1、2、3....个数字
		scanf_s("%d",&arr[i]);//录入数据进数组
	}
	printA(arr, len);
	printf("----------------------\n");


	int i = 0;
	int j = len - 1;
	while (i< j)//前面与后面的交换数字
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;//循循靠近比较
		j--;
	}
	printA(arr, len);

	return 0;
}

void printA(int arr[], int len)//定义新函数来遍历数组
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n",arr[i]);
	}
}