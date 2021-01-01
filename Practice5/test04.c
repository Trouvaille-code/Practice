#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 4
#define M 4
void GetNum(int num[], int n);
int DataConparability(int num[], int guess[], int n);
int main()
{
	int i;
	int num[N], n = 4;
	int guess[M];
	int b, k, count = 0, magic;
	printf("Input the number of guess:");
	scanf("%d", &k);
	GetNum(num, n);
	for (b = 0; b < k; b++)
	{
		printf("Input count for 4 byte:");
		scanf("%1d%1d%1d%1d", &guess[0], &guess[1], &guess[2], &guess[3]);
		magic = DataConparability(num, guess, n);   /*一次数据猜测结果反馈*/
		if (magic == 1)
		{
			printf("Congratulations!\n");
			break;
		}
		else
		{
			count++;
		}
	}
	if (count == k)
	{
		printf("Sorry,you haven`t guess the right number!\n");
		printf("The right number is :\n");
		for (i = 0; i < n; i++)
		{
			printf("%d", num[i]);
		}
	}
	return 0;
}

/*函数功能：利用随机数获取一个各位不同的4位数*/
void GetNum(int num[], int n)
{
	int i, count = 0, k, ret;
	srand(time(NULL) + 1);
	do {
		for (i = 0; i < n; i++)
		{
			ret = rand() % 10;
			num[i] = ret;
		}
		for (i = 0; i < n - 1; i++)
		{
			for (k = i + 1; k < n; k++)
			{
				if (num[i] != num[k])
				{
					count++;
				}
			}
		}
	} while (count != 6);
}

/*函数功能：猜测数据与随机数比较*/
int DataConparability(int num[], int guess[], int n)
{
	int i, j;
	int x = 0, y = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (num[i] == guess[j])
			{
				if (i == j)
				{
					x++;
				}
				else
				{
					y++;
				}
			}
		}
	}
	printf("%dA%dB\n", x, y);              /*猜测一次数据与随机数比较*/
	if (x == 4)
	{
		return 1;
	}
	else
	{
		return -1;
	}

}
