/*************************************************************************
    > File Name: fopen_0003.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define N 3

struct stu
{
	char name[10];
	int num;
	int age;
	float score;
}boys[N], boy, *pboys;

int main(void)
{
	FILE *fp;
	pboys = boys;
	if((fp = fopen("./test.txt", "wb+")) == NULL)
	{
		printf("Cannot open file,Press any key to exit!\n");
		getchar();
		exit(1);
	}
	printf("Input data:\n");
	for(int i = 0; i < N; i++)
		scanf("%s %d %d %f", pboys->name, &pboys->num, &pboys->age,&pboys->score);
	fwrite(boys, sizeof(struct stu), N, fp);
	fseek(fp, sizeof(struct stu), SEEK_SET);
	fread(&boy, sizeof(struct stu), 1, fp);
	printf("%s %d %d %f\n", boy.name, boy.num, boy.age, boy.score);
	fclose(fp);
	return 0;
}
