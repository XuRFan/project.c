#include<stdio.h>
int main()
{
	printf("===控制计数法===\n");
	int i, j, com[128];
	int c;
	//初始化使用数组
	for (i = 0; i < 128; i++)
	{
		com[i] = 0;
	}
	//字符输入
	while ((c = getchar()) != 49)//每个字符进行实现
	{
		for (i = 0; i < 128; i++)
		{
			if (i == c)//实现ascll码值的使用
			{
				com[i] += 1;
				break;
			}
		}
	}
	//判断是否可以使用
	for (i = 0; i < 128; i++)
	{
		if (com[i] > 0 && i != ' ' && i != '\t' && i != '\n')
		{
			printf("%c: ", i);//实现输入字符
			for (j = 0; j < com[i]; j++)
				printf("*");//实现直方图
			printf("\n");//一种执行完毕后进行换行处理
		}
	}
	getchar();
	return 0;
} 
