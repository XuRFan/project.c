# project.c
#include<stdio.h>//删除其中一个数字
void del(int* num, int numsize, int numb)//分别是数组，数组长度，删除数
{
	int str = 0, pro = 0;
	while (str < numsize)
	{
		if (num[str] != numb)//不满足删除条件的保留
		{
			num[pro] = num[str];
			pro++;
			str++;
		}
		else//另外就是满足删除条件，则原数组加加跳过
		{
			str++;
		}
	}
	for (int i = 0; i < pro; i++)
		printf("%d ", num[i]);
}
int main()
{
	int a[5] = { 3,1,2,3,4 }, b=3, c;//实现删除某个数字
	int len = 0;
	len = sizeof(a) / sizeof(a[0]);//求数字数
	del(a, len, b);//分别是数组，数组长度，删除数
	return 0;
}
