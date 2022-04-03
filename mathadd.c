# project.c
#include<stdio.h>
int* mathadd(int *A, int Asize, int K, int *backsize)
{
	int ksize = 0;
	int knum = K;
	while (knum)//计算加数的个数
	{
		ksize++;
		knum /= 10;//每除一次从右向左就少一位
	}
	int len = Asize > knum ? Asize : knum;//选择数字长得一方
	int* retArr = (int *)malloc(sizeof(int) * (len + 1));//动态开辟内存为长数字
	int reit = 0;
	int Ai = Asize - 1;//从零开始所以减一
	int nextnum = 0;//进位表示
	while (len--)//执行次数
	{
		int a;
		if (Ai >= 0)//防止数组中的个数较少，以免越界
		{
			a = A[Ai];		
			Ai--;
		}
		int  ret = a + K % 10 + nextnum;//每个数位的相加
		K /= 10;//去除每次的个位数
		if (ret > 9)//十进制判断是否大于就9满足条件进位加一
		{
			nextnum = 1;
			ret -= 10;
		}
		else//不满足条件不进位，返回零
		{
			nextnum = 0;
		}
		retArr[reit] = ret;//每次的值都赋给开辟内存的指针
		reit++;
	}
	int left = 0, right = reit - 1;
	while (left < right)//本来输出的是相反的所以要调换一下位置
	{
		int tmp=0;
		tmp = retArr[left];
		retArr[left] = retArr[right];
		retArr[right] = tmp;
		++left;
		--right;
	}
	//*backsize = reit;//暂时不会用这个
	return retArr;
}
int main()
{
	int a[4] = { 1,2,0,0 };
	int b = 123;
	int len = sizeof(a) / sizeof(a[0]);
	int* s = 1, s1 = 2;
	int* c;
	c=mathadd(a, len, b, s);//数组（被加数），数组长度，加数，返回数字位数
	for (int i = 0; i < 4; i++)//输出相加后的数组
		printf("%d", *(c+i));
	return 0;
}
