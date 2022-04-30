# project.c
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 5
int choosemid(int len, int* s,int k)
{
	int left = 0;
	int right = len - 1;
	int mid = (left + right) / 2;
	if (s[mid] == k)
		return s[mid];
	while (left <= right)
	{
		if (s[mid] < k)
			left = mid + 1;
		else if (s[mid] > k)
			right = mid - 1;
		/*else
			return s[mid];*/
		mid = (left + right) / 2;
	}
	if (s[mid] == k)
		return s[mid];
	return -1;
}
int main()
{
	int a[N];
	int i,k;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("寻找的值\n");
	scanf("%d", &k);
	int len = sizeof(a) / sizeof(a[0]);
	int mid = 0;
	mid=choosemid(len,a,k);
	if (mid != -1)
		printf("找到了\n");
	else
		printf("没有找到\n");
	return 0;
}
