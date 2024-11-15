//生成10个1~100之间随机数存入数组，要求数据不重复
//1）求出所有数据的和
//2）求所有数据平均数
//3）统计有多少个数据比平均值小

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int contains(int arr[], int len, int num);
int main()
{
	srand(time(NULL));

	int arr[10] = { 0 };//定义数组
	int len = sizeof(arr) / sizeof(int);//计算数组的字节

	for (int i = 0; i < len; )
	{
		int num = rand() % 100 + 1;//生成十个随机数

		int flag = contains(arr, len, num);
		if (!flag)
		{
			arr[i] = num;
			i++;//当随机数与前面的不一样时才录入数组且i++
		}
	}
	int count = 0;
	for(int i=0;i<len;i++)
	{
		count = count + arr[i];
		printf("%d\n", arr[i]);//与前面i++位置不同，故不在前面打印
	}
	printf("----------------------------------------\n");
	printf("随机数之和为：%d\n", count);//随机数之和
	printf("----------------------------------------\n");
	double average = count / 10;
	printf("随机数的平均值为：%lf\n", average);//随机数的平均值
	printf("----------------------------------------\n");

	//求有多少个数比平均数小
	int res = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < average)
		{
			res++;
		}
	}
	printf("有%d个随机数比平均值小\n", res);
}

int contains(int arr[], int len, int num)//定义一个函数来判断随机数是否相等
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == num)
		{
			return 1;
		}
	}
	return 0;
} 