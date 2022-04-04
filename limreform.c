# project.c
#define _CRT_SECURE_NO_WARNINGS//限制字符个数八十以上，直接输出
#include<stdio.h>
#define MAXLINE 1000
//void copy(char to[], char from[])
//{
//	int i = 0;
//	while ((to[i] = from[i]) != '\0')
//		i++;
//}
int getline(char s[], int lim)
{
	int i, c;
	for (i = 0; i < lim && (c = getchar()) != 49 && c != '\n'; i++)//进行输入
		s[i] = c;//同时赋值给定义函数传来的s数组
	if (c == '\n')//将换行与输入分开为了能够更好的区分
	{
		s[i] = c;
		i++;//该加加，为了给该输入执行停止加一个空间
	}
	s[i] = '\0';//执行输入结束
	return i;
}
int main()
{
	int len;
	int max = 80;//最低输入限制条件
	char line[MAXLINE];
	char longest[MAXLINE];
	while (len = getline(line, MAXLINE) > 0)//实现该函数有值的情况下进行
	{
		if (len > max)//限定输出的字符数量，满足条件则执行
		{
			printf("%s ", line);
			//max = len;
			//copy(longest, line);//转化，为了执行输出条件
		}
	}
	//if (max > 0)//满足if条件实现输出
		//printf("%s ", longest);
	return 0;
}
