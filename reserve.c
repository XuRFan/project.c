# project.c
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void reserve(char* s,int n)
{
	int left = 0;
	int right =n-1;
	int tmp = 0;
	while (left < right)//前后调换位置
	{
		tmp = s[left];
		s[left] = s[right];
		s[right] = tmp;
		++left;
		--right;
	}
	
}
int main() 
{
	int a,n;
	char s[] = "abcdefgh";
	int len = sizeof(s) / sizeof(s[0])-1;//多减一是长度中包含了\0
	reserve(s,len);
	for (int i = 0; i < len; i++)
		printf("%c ", *(s + i));
	return 0;
}
