# project.c
#include<stdio.h>
#define TAB 8
int main(void)
{
    int ch;
    int n = 0;
    int a = 1;
    while ((ch = getchar()) != 49)
    {
        if (ch == '\t')
        {
            n = 5;
            //n = TAB - (a - 1) % TAB;//n是应该补的空格数
            while (n > 0)
            {
                printf(" ");
               // a++;//只要输出了字符，那就a+1，以减少后面的空格数
                n--;
            }
        }
        else if (ch == '\n')
        {
            putchar('\n');
            a = 1;//下一行又重新开始
        }
        else
        {
            putchar(ch);
            //a++;
        }
    }
    return 0;
}
