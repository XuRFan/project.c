# project.c
#include<stdio.h>
void fun(char* num, int lim)
{
	int str = 0, pro = 0, cur = 1;
	if (lim == 0)
		return 0;
	while (str < lim)//输出限制条件
	{
		if (num[str] != num[cur])//前后不等的话输出前一位
		{
			num[pro] = num[str];
			str++;
			pro++;
			cur++;
		}
		else//相等的话不输出加加跳过
		{
			str++;
			cur++;
		}
	}
	num[pro++] = num[str++];//等于下面三个式子
	//num[pro]=num[str];
	//pro++;
	//str++;
	for (int i = 0; i < pro-1; i++)
		printf("%d", num[i]);
}
int main()
{
	char a[5] = { 1,2,2,3,4 };
	int len;
	len = sizeof(a) / sizeof(a[0]);
	fun(a,len);
	return 0;
}
