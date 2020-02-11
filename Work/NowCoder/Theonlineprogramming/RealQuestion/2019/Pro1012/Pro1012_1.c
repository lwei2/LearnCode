/*************************************************************************
    > File Name: Pro1012_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#define New(a,i) (a*)malloc(sizeof(a)*i)
#define Cle(a) memset(a,0,sizeof(a));
#define Inv -1
#define MAX 100000

int n = 0;
int **a = NULL;

void move(int *x, int *y, int *x0, int *y0)
{
	(*x) -= (*x0);
	(*y) -= (*y0);
	int tmp = *x;
	*x = -(*y);
	*y = tmp;
	(*x) += (*x0);
	(*y) += (*y0);
}
void input()
{
	scanf("%d",&n);
	a = New(int*, 4*n);
	for(int i = 0; i < 4 * n; ++i)
		a[i] = New(int, 4);
	for(int i = 0; i < 4*n; ++i)
		for(int j = 0; j < 4; ++j)
			scanf("%d",&a[i][j]);	
}
int len(int a1[], int a2[])
{
	return (a1[0] - a2[0])*(a1[0] - a2[0]) + (a1[1] - a2[1])*(a1[1] - a2[1]);
}
int vert(int a1[], int a2[], int a3[], int a4[])
{
	return ((a1[0] - a2[0])*(a3[0] - a4[0])+(a1[1] - a2[1])*(a3[1] - a4[1]) == 0);
}
int noequal(int a1[], int a2[], int a3[], int a4[])
{
	if(a1[0] == a2[0] && a1[1] == a2[1])
		return 0;
	if(a1[0] == a3[0] && a1[1] == a3[1])
		return 0;
	if(a1[0] == a4[0] && a1[1] == a4[1])
		return 0;
	if(a2[0] == a3[0] && a2[1] == a3[1])
		return 0;
	if(a2[0] == a4[0] && a2[1] == a4[1])
		return 0;
	if(a3[0] == a4[0] && a3[1] == a4[1])
		return 0;
	return 1;
}
int judge(int a1[], int a2[], int a3[], int a4[])
{
	if(!noequal(a1,a2,a3,a4))
		return 0;
	if(len(a1,a2) == len(a3, a4))
	{
		if(vert(a1,a2,a3,a4) && len(a1,a2) == len(a2, a3))
			return 1;
		if(vert(a1,a2,a3,a4) && len(a1,a2) == len(a2, a4))
			return 1;
	}
	if(len(a1, a3) == len(a2, a4))
	{
		if(vert(a1,a3,a3,a2) && len(a1, a3) == len(a3, a2))
			return 1;
		if(vert(a1,a3,a3,a4) && len(a1, a3) == len(a3, a4))
			return 1;
	}
	if(len(a1, a4) == len(a2, a3))
	{
		if(vert(a1, a4, a4, a2) && len(a1, a4) == len(a4,a2))
			return 1;
		if(vert(a1, a4, a4, a3) && len(a1, a4) == len(a4, a3))
			return 1;
	}
	return 0;
}
int ope(int i)
{
	int cnt = INT_MAX, tag = 0;
	int tcnt = 0;
	for(int i1 = 0; i1 < 4; ++i1)
	{
		for(int i2 = 0; i2 < 4; ++i2)
		{
			for(int i3 = 0; i3 < 4; ++i3)
			{
				for(int i4 = 0; i4 < 4; ++i4)
				{
					tcnt = i1 + i2 + i3 + i4;
					if(judge(a[i], a[i+1], a[i+2], a[i+3]))
					{
						cnt = cnt < tcnt ? cnt : tcnt;
						tag = 1;
					}
					move(&a[i+3][0], &a[i+3][1], &a[i+3][2], &a[i+3][3]);					
				}
					move(&a[i+2][0], &a[i+2][1], &a[i+2][2], &a[i+2][3]);					
			}
				move(&a[i+1][0], &a[i+1][1], &a[i+1][2], &a[i+1][3]);					
		}
			move(&a[i][0], &a[i][1], &a[i][2], &a[i][3]);			
	}
	if(tag)
		return cnt;
	else
		return -1;
}
int main(void)
{
	input();
	for(int i = 0; i < 4*n - 4; i += 4)
		printf("%d\n", ope(i));
	printf("%d", ope(4*n - 4));

	return 0;
}
