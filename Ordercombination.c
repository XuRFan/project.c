# project.c
#include<stdlib.h>
#include<stdio.h>//条件：顺序数组进行相互比较组合
void Ordercombination(int* num1, int numsize1, int m, int* num2, int numsize2, int n)
{
	int i1 = 0, i2 = 0,str=0;
	int* tmp = (int *)malloc(sizeof(int) * (m + n));//开辟动态内存空间
	while (i1 < m && i2 < n)//同时存在时进行比较，知道一方结束
	{
		if (num1[i1] < num2[i2])//小的哪一方赋值个开辟的动态内存空间
		{
			tmp[str] = num1[i1];
			i1++;
			str++;
		}
		else//大于或等于的就赋值第二个，谁赋值谁加加
		{
			tmp[str]=num2[i2];
			i2++;
			str++;
		}
	}
	while (i1 < m)//谁没有进行完成就将剩余的全部赋值给动态内存空间
	{
		tmp[str] = num1[i1];
		str++;
		i1++;
	}
	while (i2 < n)
	{
		tmp[str] = num2[i2];
		str++;
		i2++;
	}
	memcpy(num1, tmp, sizeof(int) * (m + n));//别赋值的数组，赋值数组，赋值字节数字
	free(tmp);//释放开辟空间
	for (int i = 0; i < str; i++)//打印
		printf("%d ", num1[i]);
}
int main()
{
	int a[6] = { 1,2,3,0,0,0 };
	int b[3] = { 2,5,6 };
	int len1 = sizeof(a) / sizeof(a[0]) ;
	int len2 = sizeof(b) / sizeof(b[0]);
	int m = len1 - 3;//如果有更好的确定数值个数的方法的告诉我一下哈，谢谢
	int n = len2;
	Ordercombination(a,len1,m,b,len2,n);//数组，数组长度，数字长度
	//for (int i = 0; i < 6; i++)//暂时还不会用另一种方法执行更合适
		//printf("%d ", a[i]);
	return 0;
}
