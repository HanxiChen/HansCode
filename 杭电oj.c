//0
/*
#include <stdio.h>
int main()
{
	char a, b, c, d, temp;
	while(scanf("%c%c%c%c", &a, &b, &c, &d) != EOF)
	{		
		
		if(a > b)
		{
			temp = a; a = b; b = temp;
		}
		if(a > c)
		{
			temp = a; a = c; c = temp;
		}
		if(b > c)
		{
			temp = b; b = c; c = temp;
		}
		printf("%c %c %c\n", a, b, c);
	}
	return 1;
}
*/

//1
/*
#include <stdio.h>
#include <math.h>
int main()
{
	double X1, Y1, X2, Y2;
	double len;
	while(scanf("%lf %lf %lf %lf", &X1, &Y1, &X2, &Y2) != EOF)
	{
		len = sqrt( (X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2));
		printf("%.2lf\n", len);	
	}
	
	return 1;
}
*/

//2
/*
#include <stdio.h>
#include <math.h>
#define PI 3.1415927
int main()
{
	double V, r;
	while(scanf("%lf", &r) != EOF)
	{
		V = (4 * PI * pow(r,3)) / 3;
		printf("%.3lf\n", V);
	}
	return 1;
}
*/

//3
/*
#include <stdio.h>
#include <math.h>
int main()
{
	double num, res;
	while(scanf("%lf", &num) != EOF)
	{
		res = fabs(num);
		printf("%.2lf\n", res);
	}
	return 1;
}
*/

//4
/*
#include <stdio.h>
int main()
{
	int t;
	while(scanf("%d", &t) != EOF)
	{
		if(t >= 90 && t <= 100)   printf("A\n");
		else if(t >= 80 && t <= 89)  printf("B\n");
			 else if(t >= 70 && t <= 79)  printf("C\n");
				  else if(t >= 60 && t <= 69)  printf("D\n");
					   else if(t >= 0 && t <= 59)  printf("E\n");
							else printf("Score is error!\n");
	}
	return 1;
}
*/

//5
/*
#include <stdio.h>
int main()
{
	int sum = 0, year, month, day;
	while(scanf("%d/%d/%d", &year, &month, &day) != EOF)
	{
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) )//闰年
		{
			 switch(month)
			 {
			 case 1: sum = 0 + day;break;
			 case 2: sum = 31 + day;break;
			 case 3: sum = 60 + day;break;
			 case 4: sum = 91 + day;break;
			 case 5: sum = 121 + day;break;
			 case 6: sum = 152 + day;break;
			 case 7: sum = 182 + day;break;
			 case 8: sum = 213 + day;break;
			 case 9: sum = 244 + day;break;
			 case 10: sum = 274 + day;break;
			 case 11: sum = 305 + day;break;
			 case 12: sum = 335 + day;break;
			 }
			 printf("%d\n", sum);
		}
		else//平年
		{
			switch(month)
			 {
			 case 1: sum = 0 + day;break;
			 case 2: sum = 31 + day;break;
			 case 3: sum = 59 + day;break;
			 case 4: sum = 90 + day;break;
			 case 5: sum = 120 + day;break;
			 case 6: sum = 151 + day;break;
			 case 7: sum = 181 + day;break;
			 case 8: sum = 212 + day;break;
			 case 9: sum = 243 + day;break;
			 case 10: sum = 273 + day;break;
			 case 11: sum = 304 + day;break;
			 case 12: sum = 334 + day;break;
			 }
			 printf("%d\n", sum);
		}
	}
	return 1;
}
*/

//6
/*
#include <stdio.h>
int main()
{
	int a[50], b[50], i, j = 0, n, res = 1, flag = 0;
	while(scanf("%d", &n) != EOF)
	{
		j = 0; flag = 0; res = 1;//更新初值
		for(i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);

		}
		for(i = 0; i < n; i++)
		{
			if(a[i] % 2 != 0)//判断奇数
			{
				b[j] = a[i];
				j++;
				flag++;
			}
		}
		for(j = 0; j < flag; j++)
		{
			res *= b[j];
		}
		printf("%d\n", res);
	}
	return 1;
}
*/

//7
/*
#include <stdio.h>
int main()
{
	int m, n, i, x, y, temp = 0;//y是奇数的立方和， x是偶数的平方和
	while(scanf("%d %d", &m, &n) != EOF)
	{
		x = 0; y = 0;
		if(m > n)
		{
			temp = m;
			m = n;
			n = temp;
		}
		for(i = m; i <= n; i++)
		{
			if(i % 2 != 0)//奇数
			{
				y += i * i * i;
			}
			else//偶数
			{
				x += i * i;
			}
		}
		printf("%d %d\n", x, y);
	}
	return 1;
}
*/

//8
/*
#include <stdio.h>
int main()
{
	int a, b, c, n, i;
	double count[100];
	while(scanf("%d", &n) != EOF)
	{
		a = 0; b = 0; c = 0;//a负数，b零，c正数 
		if(n == 0)
		{
			break;
		}
		for(i = 0; i < n; i++)
		{
			scanf("%lf", &count[i]);
		}
		for(i = 0; i < n; i++)
		{
			if(count[i] > 0)
			{
				c++;
			}
			else if(count[i] == 0)
				 {
					 b++;
				 }
			else
			{
				a++;
			}
		}
		printf("%d %d %d\n", a, b, c);
	}
	return 1;
}
*/

//9
/*
#include <stdio.h>
#include <math.h>
int main()
{
	double a[1000], m, n, sum = 0;
	int i;
	while(scanf("%lf %lf", &n, &m) != EOF)
	{
		a[0] = n; sum = a[0];
		for(i = 1; i < m; i++)
		{
			a[i] = sqrt(a[i - 1] );
			sum += a[i];
		}
		printf("%.2lf\n", sum);
	}
	return 1;
}
*/

//10
/*
#include <stdio.h>
int main()
{
	int m, n, ge, shi, bai, temp = 0;
	int flag;
	while(scanf("%d %d", &m, &n) != EOF)
	{
		flag = 0; 
		if(m > n)
		{
			temp = m; 
			m = n;
			n = temp;
		}
		for(m; m <= n; m++)
		{
			bai = m / 100;
			shi = m / 10 % 10;
			ge = m % 10;
			if(m == ge * ge * ge + shi * shi * shi + bai * bai * bai)
			{
				if(flag == 0)
				{
					printf("%d", m);
				}
				else printf(" %d", m);
				flag = 1; //有水仙花数的标志
			}
		}
		if(flag == 0)
		{
			printf("no");
		}
		printf("\n");
	}
	return 1;
}
*/

//11
/*
#include <stdio.h>
int main()
{
	int m, i, j, k, a[100];
	double  sum = 0;
	while(scanf("%d", &m) != EOF)
	{
		for(i = 0; i < m; i++)
		{
			scanf("%d", &a[i]);
		}
		i = 0;
		for(j = 0; j < m; j++)
		{
			sum = 0;
			for(k = 1; k <= a[i]; k++)
			{
				if(k % 2 != 0)//奇数项
				{
					sum += 1.0 / k;
				}
				else
				{
					sum -= 1.0 / k;
				}
			}
			i++;
			printf("%.2lf\n", sum);
		}
	}
	return 1;
}
*/

//12
/*
#include <stdio.h>
int main()
{
	int m, n, i, x, y, flag;
	while(scanf("%d %d", &x, &y) != EOF)
	{
		flag = 0;//初始化
		if(x == 0 && y == 0)
		{
			continue;
		}
		for(n = x; n < y; n++)
		{
			m = n * n + n + 41;//m是多项式的结果
			for(i = 2; i < (m - 1); i++)
			{
				if(m % i == 0)
				{
					flag = 1;//该数不是素数
				}
			}
		}
		if(flag == 1)
		{
			printf("Sorry\n");
		}
		else
		{
			printf("OK\n");
		}
	}
	return 1;
}
*/

//13
/*
#include <stdio.h>
int main()
{
	int n, sum, i;
	while(scanf("%d", &n) != EOF)
	{
		sum = 1;
		for(i = 1; i < n; i++)
		{
			sum = (sum + 1) * 2;
		}
		printf("%d\n", sum);
	}
	return 1;
}
*/

//14
/*
#include <stdio.h>
int main()
{
	int n, i, a[100];
	double per, max, min, score, temp;
	while(scanf("%d", &n) != EOF)
	{
		score = 0;
		for(i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		max = a[0]; min = a[0];//初始化最大值和最小值
		for(i = 0; i < n; i++)
		{
			if(max < a[i])
			{
				max = a[i];
			}
			if(min > a[i])
			{
				min = a[i];
			}
			score += a[i];//计算总和
		}
		per = (score - max - min) / (n - 2);
		printf("%.2lf\n", per);
	}
	return 1;
}
*/

//15
/*
#include <stdio.h>
int main()
{
	int m, n, i, j, k, a[100], b[50];
	int sum, per, flag;
	while(scanf("%d %d", &n, &m) != EOF)
	{
		a[0] = 2; sum = 0; per = 0; flag = 0;
		for(i = 0; (i + 1) < n; i++)
		{
			a[i + 1] = a[i] + 2;
		}
		i = 0;
		while(i < n)
		{
			sum = 0;
			if(i + m <= n)
			{
				for(j = 0; j < m; j++, i++)
				{
					sum += a[i];
				}
				per = sum / m;
			}
			else
			{
				flag = i; 
				for(j = i; j < n; j++)
				{
					sum += a[j];
				}
				per = sum / (n - flag);
			}
			//输出控制
			if(flag == 0)
			{
				if(n == m)
				{
					printf("%d", per);
				}
				else if(i == m)
				{
					printf("%d", per);
				}
				else
				{
					printf(" %d", per);
				}
			}
			else
			{
				printf(" %d", per);
				break;
			}
		}
		printf("\n");
	}
	return 1;
}
*/

//16
/*
#include <stdio.h>
int main()
{
	int a[100], n, i;
	int min, temp, flag;
	while(scanf("%d", &n) != EOF)
	{
		temp = 0; flag = 0;
		if(n == 0)
		{
			continue;
		}
		for(i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		min = a[0]; 
		for(i = 1; i < n; i++)
		{
			if(min > a[i])
			{
				min = a[i]; 
				flag = i;
			}
		}
		
		temp = a[0]; a[0] = a[flag]; a[flag] = temp;//数列首个数与最小值互换
		for(i = 0; i < n; i++)
		{
			if(i != n - 1)
			{
				printf("%d ", a[i]);
			}
			else
			{
				printf("%d", a[i]);
			}
		}
		printf("\n");
	}
	return 1;
}
*/

//17
#include <stdio.h>
#include <string.h>
int main()
{
	int i, j, n, sum, len;
	char str[100];
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0; i < n; i++)
		{
			sum = 0; len = 0;
			scanf("%s", str);
			len = strlen(str);
			for(j = 0; j < len; j++)
			{
				if(str[j] <= '9' && str[j] >= '0')
				{
					sum++;
				}
			}
			printf("%d\n", sum);
		}
	}
	return 1;
}
	