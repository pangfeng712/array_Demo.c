#include<stdio.h>
int main()
{
	int arr1[5] = { 18,17,16,17,19 };
	double arr2[1] = { 168.5 };
	printf("%d\n", arr1[2]);//索引：从0开始数
	printf("%.1lf\n",arr2[0]);

	arr1[3] = 20;//修改函数组内值
	printf("%d\n",arr1[3]);
	return 0;
}
