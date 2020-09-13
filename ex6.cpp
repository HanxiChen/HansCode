//1(1)
/*
#include <stdio.h>
int main()
{
	float e,item;
	int i,j,n;
	printf("请输入n:");
	scanf("%d",&n);
	e=1;
	for (i=1;i<=n;i++)
	{
		item=1;
		for (j=1;j<=i;j++)
		{
			item=item*j;
		}
		e=e+1.0/item;
	}
	printf("e=%.4f\n",e);
	return 1;
}
*/

//2(1) 
/*
#include <stdio.h>
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		switch(i)
		{
			case 0:
				printf("%d",i);
			case 2:
				printf("%d",i);
			default:
				printf("%d",i);
		}
	}
	return 1;
}
*/

//2(3)
/*
#include <stdio.h>
int main()
{
	int i,n=0;
	for(i=2;i<5;i++)
	{
		do
		{ 
			if(i%3)//i关于3取余数, 余数不为0时为正确, 即i不是3的倍数为正确
				continue;
			n++;
		}while(!i);
		n++;
	}
	printf("n=%d\n",n);
	return 1;
}
*/


//3(1)统计奇数偶数的个数
/*
#include <stdio.h>
int main()
{
	char c;
	int x,odd_Num=0,even_Num=0;
	do{
		scanf("%d",&x);
		if (x%2==0)
			even_Num++;
		else
			odd_Num++;
	}while(c=getchar()!='\n');
	printf("偶数个数：%d，奇数个数：%d\n",even_Num,odd_Num);
	return 1;
}
*/

//3(2)
/*
#include <stdio.h>
int main()
{
	int i,j,fac;//i完数，fac保存一个因子和的变量，j因子
    for(i=1;i<1000;i++)
	{
		fac=0;
		for (j=1;j<i;j++)
		{
			if(i%j==0)
				fac=fac+j;
		}
		if(i==fac)
		{
			printf("%d its factors are:",i);
			for (j=1;j<i;j++)
			{
				if(i%j==0)
					printf(" %d",j);
			}
			printf("\n");
		}
	}
	return 1;
}
*/
//printf("%d its factors are:%2.d\n",i,j);
//printf("%2.d\n",j);
//printf("%d its factors are:\n",i);


//4(1)猜数游戏1
/*
#include <stdio.h>
#include <time.h>
#include<stdlib.h>
int main()
{
	int x,y,n;
	srand (time(NULL));
	x=rand()%100+1;
	printf("请输入一个数:");
	scanf("%d",&y);
	n=1;
	if(x==y)
		{
			printf("结束游戏\n");
			printf("游戏次数%d\n",n);
	}
	else
	{
		while(x!=y)
	{
		if(x<y)
		{
			printf("大了\n");
			scanf("%d",&y);
			n=n++;
		}
		else
		{
		printf("小了\n");
		scanf("%d",&y);
		n=n++;
		}
	}
	}
	printf("结束游戏\n");
	printf("游戏次数%d\n",n);
	return 1;
}
*/

//4(2)猜数游戏2
/*
#include <stdio.h>
#include <time.h>
#include<stdlib.h>
int main()
{
	int x,y,n;
	srand (time(NULL));
	x=rand()%100+1;
	printf("请输入一个数:");
	scanf("%d",&y);
	n=1;
	if(x==y)
		{
			printf("结束游戏\n");
			printf("游戏次数%d\n",n);
		}
	else
	{
		while(x!=y)
		{
			if(x<y)
			{
				printf("大了\n");
				scanf("%d",&y);
				n=n++;
			}
			else
			{
			printf("小了\n");
			scanf("%d",&y);
			n=n++;
			}
			if (n>=10)
				break;
		}
	}
	printf("结束游戏\n");
	printf("游戏次数%d\n",n);
	return 1;
}
*/

//4(3)
/*
#include <stdio.h>
int main()
{
	int x;//苹果个数
	int per;//平均数
	int day=1;
	int money=1.6;
	for(x=2;x<100;day++)
	{
		x=x+2*x;
		money=money+2*x*0.8;
	}
	per=money/day;
	printf("平均每天要%d元",per);
	return 1;
}
*/

//4(4)
/*
#include <stdio.h>
int main()
{
	double S=0;
	int r;
	double pi=3.14;

	for(r=1;S<=100;r++)
	{
		S=2*pi*r*r;
		printf("圆的面积：%lf\n",S);
	}
	return 1;
}
*/

//4(5)闰年判断
/*
#include <stdio.h>
int main()
{
	int year;
	do
	{
	printf("请输入一个年份：");
	scanf("%d",&year);
	
	
	if(year==-1)
	{
		printf("程序结束");
		break;
	}
	else 
		
		if ((year%400==0)||(year%4==0&&year%100!=0))
		{
			printf("闰年\n");
			continue;
	}
	else
	{
			scanf("%d",&year);
		}
		
	}while(year=-1);
	return 1;
}
*/

//4(6)
/*
#include <stdio.h>
int main()
{
	double x,y,i,num;
	for (i=1;i<=7;i++)
	{
		num=1;
		for (x=1;x<=7;x++)
		{
			x=x*x;
		}
		num=num+i/x;
	}
	printf("%lf",num);
	return 1;
}
*/

//4(7)菜单程序驱动
/*
#include <stdio.h>
int main()
{
	int x,y,z;//输入的三个数
	int n;//所需要的菜单项
	int a,b=1;//循环次数
	int num=1;//整数的阶乘
	int i,m=0;//i素数循环次数,m每次除的素数
	do
	{
		printf("请输入所要的菜单项(整数阶乘输入1，素数的判断输入2，奇偶数判断输入3，退出输入4):");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("请输入一个整数:");
				scanf("%d",&x);
					for(a=1;a<=x;a++)
					{
						num=num*a;
					}
				printf("%d\n",num);
				break;
			case 2:
				printf("请输入一个整数:");
				scanf("%d",&y);
				for(i=2;i<y;i++)
				{
					if(y%i==0)
					{
						m=m+1;
					}
				}
				if(m==0)
				{
						printf("%d是素数\n",y);
				}	
				else
				{
					printf("%d不是素数\n",y);
				}
				
				break;
			case 3:
				printf("请输入一个整数:");
				scanf("%d",&z);
				if (z%2==0) 
					printf("偶数\n");
				else 
					printf("奇数\n");
				break;
			case 4:
				break;
		}
		continue;
 	}while("%c"!="退出");
	return 1;
}
*/