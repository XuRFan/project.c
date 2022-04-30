# project.c
#include<stdio.h>
union student
{
	char class[20];
	char point[20];
};
struct student1
{
	char name[20];
	char sex;
	int num;
	union student bev;
}person[2];
int main()
{

	int i;
	for (i = 0; i < 2; i++)
	{
		scanf("%s%s%d", person[i].name, &person[i].sex, &person[i].num);
		if (person[i].num == 1)
			scanf("%s", person[i].bev.class);
		else if (person[i].num == 0)
			scanf("%s", person[i].bev.point);
	}
	for (i = 0; i < 2; i++)
	{
		printf("%s%s%d", person[i].name, &person[i].sex, &person[i].num);
		if (person[i].num == 1)
			printf("%s", person[i].bev.class);
		else if (person[i].num == 0)
			printf("%s", person[i].bev.point);
	}
	return 0;
}
