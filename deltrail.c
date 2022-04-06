# project.c
#include<stdio.h>
#define MAXLINE 20
int getline(char s[], int lim)
{
	int i = 0, c, j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)//换行前输入
	{
		if (i < lim - 2)//限制输入防止越界
		{
			s[j] = c;
			j++;
		}
	}
	if (c == '\n')//结尾一个回车结束
	{
		s[j] = c;
		j++;
		i++;
	}
	s[j] = '\0';//前面的加加为了给后面的\0添加一个空间
	return i;
}
int remove(char s[])
{
	int i;
	i = 0;
	while (s[i] != '\n' && i<MAXLINE - 2)//先加至\n，计入个数
	{
		i++;
	}
	if (i != MAXLINE-2)
		i--;
	while (i >= 0 &&( s[i] == '\t' || s[i] == ' '))//输入的是空格或者制表符进行删除
		i--;
	if (i >= 0&&i<MAXLINE-2)//删除后续加加添加回车和\0结束
	{
		++i;
		s[i] = '\n';//有点小问题
		++i;
		s[i] = '\0';
	}
	return i;
}
int main()
{
	char line[MAXLINE];
	int len = 0;
	while (len = getline(line, MAXLINE) > 0)//输入及停止
		if (remove(line) > 0)//输入之后存在输出
			printf("%s ", line);
	return 0;
}
