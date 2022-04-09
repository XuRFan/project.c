# project.c
#include<stdio.h>
#define MAXLINE 100
void detab(char *s)
{
	int lim;
	int c,j=0,i=0;
	lim = strlen(s);
	s[lim] = '\0';
	for (i = 0;s[i]!='\0'; i++)
	{
		if (s[i]=='\t')
		{
			for (int j = lim; j > i; j--)//这里不能正向思维，会把后面的覆盖
				s[j + 2] = s[j];
			for (int k = i; k < 3+i; k++)//加的数比j大1是因为\t占了一个字节
			{
				s[k] = ' ';
			}
			lim += 4;
		}
	}
}
int main()
{
	char s[MAXLINE];
	gets(s);
	detab(s);
	puts(s);
	return 0;
}
