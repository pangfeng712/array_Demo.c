//生成10个1~~100之间的随机数存入数组中
//1）求出所有数据之和
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	srand(time(NULL));
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(int);
	int count = 0;
	for (int i = 0; i <= len; i++) 
	{
		int num = rand() % 100 + 1;
		arr[i] = num;
		count = count + arr[i];
		printf("%d\n",arr[i]);
	}
	printf("----------------------------");
	printf("%d\n", count);
	return 0;
}