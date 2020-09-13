//1
/*
#include <stdio.h>
int main()
{
	int num, a, b, c;
	for(num = 100; num < 1000; num++)
	{
		a = num / 100;
		b = num / 10 % 10;
		c = num % 10;
		if(num == a * a * a + b * b * b + c * c * c)
		{
			printf("%d\n",num);
		}
	}
	return 1;
}
*/

//2
/*
#include <stdio.h>
int main()
{
	int num, a, i;
	for(num = 1; num <= 100; num++)
	{
		a = num;
		for (i = 1 ;i < num ;i++)
		{
			if(num % i == 0)
			{
			a = a - i;
			}
		}
		if(a == 0)
		{
		printf("%d\n",num);
		}
	}
	return 1;
}
*/

//3
/*
#include <stdio.h>
int main()
{
	char a;
	int num = 0, zimu = 0;
	printf("请输入一串字符：");
	do
	{
	scanf("%c", &a);
	if(a >= '0' && a <= '9')
	{
		num++;
	}
	if( (a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') )
	{
		zimu++;
	}
	}while(a != '#');
	printf("%d %d", num, zimu);
	return 1;
}
*/

//4
/*
#include <stdio.h>
int main()
{
	int N, a[10][10], i, j, sum = 0;
	printf("请输入N * N整形二维数组的N:");
	scanf("%d", &N);
	for(i = 0; i < N; i++)//行
	{
		for(j = 0; j < N; j++)//列
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i = 0; i < N; i++)//行
	{
		for(j = 0; j < N; j++)//列
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	for(i = 0; i < N; i++)
	{
		sum += a[i][0];
		sum += a[i][N-1];
	}
	for(j = 0; j < N; j++)
	{
		sum += a[0][j];
		sum += a[N-1][j];
	}
	sum = sum - a[0][0] - a[N-1][N-1] - a[0][N-1] - a[N-1][0];
	printf("%d", sum);
	return 1;
}
*/

//5
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void panduan(int, int);
int main()
{
	int guess, magic, i, count = 0;
	srand(time(NULL));
	magic = rand() % 100 + 1;
	for(i = 1; i <= 10; i++)
	{
	printf("请输入猜的数：");
	scanf("%d", &guess);
	panduan(magic, guess);
	count++;
		if(magic == guess)
		{
			printf("恭喜你猜中，共用%d次\n",count);
			break;
		}
	}
	if(count == 10)
	{
	printf("很遗憾你没有猜中\n");
	}
	return 1;
}

void panduan(int a, int b)
{
	if(a < b)
	{
		printf("大了\n");
	}
	if(a > b)
	{
		printf("小了\n");
	}
}
*/

//6（1）
/*
#include <stdio.h>
int add(int, int);
int Print(int, int); 
int main()
{
	int a, b, res, panduan, huida;
	printf("请输入两个数：");
	scanf("%d %d", &a, &b);
	printf("请输入结果：");
	scanf("%d", &huida);
	res = add(a, b);
	panduan = Print(res, huida);
	if(panduan == 1)
	{
		printf("Right!");	
	}
	else
	{
		printf("Not correct! ");
	}
	return 1;
}

int add(int e, int f)
{
	return e + f;
}

int Print(int c, int d)
{
	int r = 0;
	if(c == d)
		r = 1;
	else 
		r = 0;
	return r;
}
*/

//6（2）
/*
#include <stdio.h>
int add(int, int);
int print(int, int);
int main()
{
	int a, b, c, res, panduan;
	printf("请输入两个加数：");
	scanf("%d %d", &a, &b);
	do
	{
		printf("请输入结果：");
		scanf("%d", &res);
		c = add(a, b);
		panduan = print(res, c);
	}while(panduan != 1);
	printf("恭喜你答对了，游戏结束！\n");
	return 1;
}

int add(int e, int f)
{
	return e + f;
}

int print(int m, int n)
{
	if(m == n)
	{
	printf("Right!\n");
	return 1;
	}
	else 
	{
	printf("Not right! Try again!\n");
	return 0;
	}
}
*/

//6(3)
/*
#include <stdio.h>
int add(int, int);
int print(int, int, int);
int main()
{
	int a, b, i, res, panduan;
	printf("请输入两个加数：");
	scanf("%d %d", &a, &b);
	for(i = 0;i < 3;i++)
	{
		printf("请输入结果：");
		scanf("%d", &res);
		panduan = print(add(a, b), res, i);
		if(panduan == 1)
		{
			break;
		}
	}
	return 1;
}

int add(int e, int f)
{
	return e + f;
}

int print(int m, int n, int j)
{
	if(m == n)
	{
		printf("Right!");
		return 1;
	}
	else if(j < 2)
	{
		printf("Not Right! Try again!\n");
		return 0;
	}
	else
	{
		printf("Not correct! You have three times! Test over!\n");
		return 0;
	}
}
*/

//6(4)
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int add(int, int);
int print(int, int);
int main()
{
	int a, b, i, res, right = 0, wrong = 0, j;
	srand(time(NULL));
	for(i = 0;i < 10;i++)
	{
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
		printf("%d + %d = ", a, b);
		scanf("%d", &res);
		j = print(add(a, b), res);
		if(j == 1)
		{
			printf("Right!\n");
			right++;
		}
		else
		{
			printf("Wrong!\n");
			wrong++;
		}
	}
	printf("一共做了10道题，对了%d道题，错了%d道题\n", right, wrong);
	return 1;
}

int add(int e, int f)
{
	return e + f;
}

int print(int m, int n)
{
	int r;
	if(m == n)
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return r;
}
*/

//7
/*
#include <stdio.h>
int main()
{
	int a[40][2], n, i, j, flag1 = 0, flag2 = 0, max = 0, min = 0;
	printf("请输入参加人数：");
	scanf("%d", &n);
	for(i = 0;i < n; i++)
	{
		for(j = 0; j < 2; j++)
		{
			if(j == 0)
			{
				printf("请输入第%d个同学的学号:", i + 1);
			}
			else
			{
				printf("请输入第%d个同学的成绩:", i + 1);
			}
			scanf("%d", &a[i][j]);
		}
	}//成绩输入
	
	for(i = 0;i < n; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}//成绩输出
	
	for(i = 0; i + 1 < n ; i++)
	{
		max = a[0][1];
		flag1 = a[0][0];
		if(max < a[i + 1][1])
		{
			max = a[i + 1][1];
			flag1 = a[i + 1][0];
		}
	}//找最大值
	for(i = 0; i + 1 < n; i++)
	{
		min = a[0][1];
		flag2 = a[0][0];
		if(min > a[i + 1][1])
		{
			min = a[i + 1][1];
			flag2 = a[i + 1][0];
		}
	}//找最小值
	printf("最大值%d，学号%d\n", max, flag1);
	printf("最小值%d，学号%d\n", min, flag2);
	
	return 1;
}
*/

//9
/*
#include <stdio.h>
int main()
{
	char a[50], b[50];
	int n = 0, i = 0, m = 0;
	printf("请输入字符串：");
	while( (a[n] = getchar()) != '.')
	{
		n++;
	}
	a[n] = '\0';
	for(i = 0; i <= n; i++)
	{
		if(a[i] >= '0' && a[i] <= '9')
		{
			m = m * 10 + (a[i] - '0');
		}
	}
	printf("%d", m);
	return 1;
}
*/

//10
/*
#include <stdio.h>
int change(int, int, int);
int main()
{
	int a = 0, b= 0, c= 0, n;
	while(1)
	{
		printf("请输入三个0-9之间的整数：");
		scanf("%d，%d，%d", &a, &b, &c);
		if(a * 100 + b * 10 + c == 999)
		{
			break;
		}
		n = change(a, b, c);
		printf("%d\n",n);
	}
	return 1;
}

int change(int j, int k, int l)
{
	int r;
	if(j < k)//此时k为较大者，存入j中
	{
		r = j;	j = k;	k = r;
	}
	if(j < l)//此时l为最大者，存入j中
	{
		r = j;	j = l;  l = r;
	}
	if(k < l)//此时l为较大者，存入k中，互换后l此时最小值
	{
		r = k;	k = l;	l = r;
	}
	return j * 100 + k * 10 + l;
}
*/

//11
/*
#include <stdio.h>
int main()
{
	int n, i, j, sum = 0, a[6][6];
	printf("请输入一个1-6的正整数：");
	scanf("%d", &n);
	printf("请输入方阵a：\n");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}//输入方阵a
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}//输出方阵a
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			sum += a[i][j];
		}
	}//所有整数的和
	for(i = 0; i < n; i++)
	{
		sum -= a[i][n - 1];
		sum -= a[i][n - 1 - i];
	}
	for(j = 0; j < n; j++)
	{
		sum -= a[n - 1][j];
	}
	sum = sum + a[0][n - 1] + a[n - 1][n - 1] + a[n - 1][0];
	printf("%d", sum);
	return 1;
}
*/

//12
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a[21], i, j, temp, x, loc;
	
	//生成随机数组
	srand(time(NULL));
	for(i = 0; i < 20; i++)
	{
		a[i] = rand()% 90 + 10;
	}
	
	//输出随机数组
	for(i = 0; i < 20; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
	//随机数组排序
	for(i = 0; i < 20 ; i++)
	{
		for(j = i + 1; j < 20 ; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	//查看排序后的数组
	for(i = 0; i < 20; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
	//插入(先一个循环找到x需要插入的位置，再用一个循环将后面的数递推)
	printf("请输入要插入的数：");
	scanf("%d", &x);
	for(i = 0; i < 20; i++)
	{
		if(x <= a[i])
		{
			break;
		}
	}
	loc = i;
	for(i = 21; i > loc; i--)
	{
		a[i] = a[i - 1];
	}
	a[loc]  = x;

	//输出最后的数列
	printf("插入后的数列：");
	for(i = 0; i < 21; i++)
	{
		printf("%d ", a[i]);
	}
	return 1;
}
*/

//13
/*
#include <stdio.h>
int main()
{
	int n, a[6][6], i, j;
	int k, hang, flag;

	//输入阶数
	printf("请输入一个数字n：");
	scanf("%d", &n);

	//输入输出数组
	printf("请输入%d阶的方阵：\n", n);
	for(i = 0; i < n ; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	//寻找鞍点
	hang = 0; k = 0; flag = 0;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(a[i][j] < a[i][k] && j != k)
			{
				k = j;
			}
		}//找行最大的
		flag = 1;
		for(hang = 0; hang < n; hang++)
		{
			if(a[hang][k] < a[i][k])
			{
				flag = 0;
				break;
			}
		}//找列最小的
		if(flag) break;
	}
	if(flag)
		printf("鞍点坐标：（%d，%d）\n", i, k);
	else
		printf("No\n");
	return 1;
}
*/

//14
/*
#include <stdio.h>
void swap(int *x, int *y);
int main()
{
	int a, b;
	printf("请输入a，b的值：");
	scanf("%d,%d", &a, &b);
	printf("交换前的a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("交换后的a = %d, b = %d\n", a, b);
}

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
*/