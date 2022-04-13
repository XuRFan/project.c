# project.c
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int add(int x, int y, int z);
	int ave(int x, int y, int z);
	int sum(int x, int y, int z);
	int he(int x, int y, int z, int (*p)(int, int, int));
	int a, b, c, f,y=0,x=0,z=0;
	int d;
	int (*p)(int, int, int);
	printf("请输入参与运算的三个数\n");
	scanf("%d%d%d", &a, &b, &c);
	printf("请选择运算模式求和输入“1”\n求平均数输入“2”\n求乘积输入“3”\n");
	scanf("%d", &d);
	if (d == 1)
	{
		//p = add;
		//y = (*p); 	
		printf("%d\n", he(a,b,c,add));
	}
	else if (d == 2)
	{
		//p = ave; 
		//x = (*p);	
		printf("%d\n",he(a,b,c, ave));
	}
	else if (d == 3)
	{
		//p = sum;
		//z = (*p);	
		printf("%d\n",he(a,b,c, sum));
	}
	else
		printf("");
	//f = (*p)(a, b, c);
    return 0;
}

int add(int x, int y, int z)
{
	int s;
	s = x + y + z;
	return (s);
}

int ave(int x, int y, int z)
{
	int s;
	s = (x + y + z) / 3;
	return (s);
}

int sum(int x, int y, int z)
{
	int s;
	s = x * y * z;
	return (s);
}

int he(int x, int y, int z, int (*p)(int, int, int))
{
	int k = (*p)(x, y, z);
	return k;
}
