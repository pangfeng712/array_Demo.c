#include<stdio.h>
int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	for (int i = 0; i <= 4; i++)
	{
		printf("%d\n",arr1[i]);
	}
	/*int num1 = arr1[0];
	int num2 = arr1[2];
	int num3 = arr1[4];
	printf("%d\n",num1+num2+num3);*/

	arr1[4] = 10;
	printf("%d\n",arr1[4]);

	int A = 18;
	printf("%p\n",&A);//获取A的首地址

	return 0;
}