#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 19
#define M 20
void ReadScore(int sore[], int n);
void DataSort(int sore[], int n);
void PrintSore(int sore[], int n);
void RegroupSore(int sore[], int num[], int n, int m, int y);
void PrintRegroupSore(int num[], int m);
int main()
{
	int sore[N], n = 19;
	int num[M], m = 20;
	int x;
	ReadScore(sore, n);
	DataSort(sore, n);
	PrintSore(sore, n);
	printf("\n");
	printf("Input x:");
	scanf("%d", &x);
	printf("\n");
	RegroupSore(sore, num, n, m, x);
	PrintRegroupSore(num, m);
	return 0;
}

/*函数功能：利用随机数为未插入值数组赋值*/
void ReadScore(int sore[], int n)
{
	int i, a, ret;
	ret = time(NULL);
	for (i = 0; i < n; i++)
	{
		a = ret + i;
		srand(a);
		sore[i] = rand() % 100 + 1;
	}
}
/*函数功能：选择法使数组元素升序排列*/
void DataSort(int sore[], int n)
{
	int i, j, k, temp;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (sore[k] > sore[j])
			{
				k = j;
			}
		}
		if (k != i)
		{
			sore[i] = temp;
			sore[i] = sore[k];
			sore[k] = temp;
		}
	}

}
/*函数功能：打印升序排列的数组*/
void PrintSore(int sore[], int n)
{
	int i;
	printf("sore[N] ：");
	for (i = 0; i < n; i++)
	{
		printf("%4d", sore[i]);
	}
}
/*函数功能：将x插入数组,使数组仍按升序排列*/
void RegroupSore(int sore[], int num[], int n, int m, int y)
{
	int i, j, k;
	for (i = 0; i < n; i++)
	{
		if (y > sore[i])
		{
			num[i] = sore[i];
		}
		else if (y = sore[i])
		{
			num[i] = y;
			break;
		}
		else
		{
			num[i] = y;
			break;
		}
	}
	if (i = n)
	{
		num[i] = y;
	}
	else
	{
		for (j = i + 1; j < m; j++)
		{
			k = j - 1;
			num[j] = sore[k];
		}

	}
}
/*函数功能：打印重组数组*/
void PrintRegroupSore(int num[], int m)
{
	int i;
	printf("num[M] :");
	for (i = 0; i < m; i++)
	{
		printf("%4d", num[i]);
	}
}