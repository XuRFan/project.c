# project.c
#include<stdio.h>
int del_note(char s[])
{
	int i, j, m, n, len,str;
	len = strlen(s);
	for (i = 0, str = 0; i < len; i++)//执行输入
	{
		if (s[i] == '"')//简单的可以不需要
			str++;
		if (s[i] == '/' && s[i + 1] == '/' && str % 2 == 0)//共同满足条件时进行
		{
			for (j = i; s[j] != '\n'; j++)//直到这一行输入结束
				s[j] = ' ';
			i = j;
		}
		if (s[i] == '/' && s[i + 1] == '*' && str % 2 == 0)//另一种注释方法
		{
			for (j = i + 1; s[j] = '/'; j++)//开始为/*结尾为*/找到结尾的/
				s[j] = ' ';
			s[i] = ' ';
			s[j] = ' ';
			//i = j + 1;//可以要也可以不要，此时的i就等于
		}
	}
	for (i = 0; i < len; i++)
		if(s[i]=='\n')
			for (j = i + 1; s[j] == ' '; j++)
				if (s[j] == '\n')
					for (m = i + 1, n = j + 1; s[m] != '\0'; s[m++] = s[n++]);

}
int main()
{
	char str[100];
	int i;
	for (i = 0; (str[i] = getchar()) != 49; i++);//字符输出给数组循环
	str[i] = '\0';//输入结束后\0截止
	del_note(str);
	puts(str);
	return 0;
}
