/*************************************************************************
    > File Name: fprintf_0002.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define N 2

struct stu
{
	char name[10];
	int num;
	int age;
	float score;
}stu1[N],stu2[N],*p1,*p2;

int main(void)
{
	FILE *fp = fopen("./test.txt", "wt++");
	if(NULL == fp)
	{
		puts("failed to open the file!");
		exit(0);
	}
	p1 = stu1;
	p2 = stu2;

	printf("Input data:\n");
	for(int i = 0; i < N; i++,p1++)
	{
		scanf("%s %d %d %f",p1->name,&p1->num,&p1->age,&p1->score);
	}
	p1 = stu1;
	for(int i = 0; i < N; i++,p1++)
	{
		fprintf(fp, "%s %d %d %f\n", p1->name, p1->num, p1->age, p1->score);
	}

	rewind(fp);

	for(int j = 0; j < N; j++,p2++)
	{
		fscanf(fp, "%s %d %d %f\n", p2->name,&p2->num,&p2->age,&p2->score);
	}
	p2 = stu2;
	for(int j = 0; j < N; j++,p2++)
	{
		printf("%s %d %d %f\n", p2->name, p2->num, p2->age, p2->score);
	}
	fclose(fp);
	return 0;
}

