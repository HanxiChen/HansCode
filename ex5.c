
//1(1)
/*
#include <stdio.h>
int main()
{
	float x;
	printf("请输入一个数x:\n");
	scanf("%f",&x);
	if (x < 0)
		printf("f(%.0f)=%.2f\n",x,-x);
	else if (x == 0)
		  printf("f(0)=0\n");
	else
		printf("f(%.0f)=%.2f\n",x,x*x);
	return 1;
}
*/

//2(1)
/*
#include <stdio.h>
int main()
{
	int x;
	printf("请输入一个整数x:\n");
	scanf("%d",&x);
	  if(x % 5 == 0 && x % 7 == 0)
		  printf("yes\n");
	  else
		  printf("no\n");
	  return 1;
}
*/

//2(2)
/*
#include <stdio.h>
int main()
{
	char ch;
	printf("请输入一个字符：");
	ch = getchar();
    if(ch >= 65 && ch <= 90)
		putchar(ch + 32);
	else if(ch >= 97 && ch <= 122)
		putchar(ch - 32);
	else if(ch >= 48 && ch <= 57)
	{
		int x;
		x=ch - '0';
		printf("%d\n",x*x);
	}
	else
		printf("输入的是其他字符!\n");
	return 1;
}
*/

//2(3)
/*
#include <stdio.h>
int main()
{
	char ch;
	printf("请输入一个字符:");
	ch=getchar();
	switch(ch)
	{
	    case'Y':
		case'y':
			printf("同意\n");
			break;
		case'N':
		case'n':
			printf("反对\n");
			break;
		default:
			printf("弃权\n");
			break;
	}
	return 1;
}
*/

//3(1)
/*
#include <stdio.h>
int main()
{
	int a=-1,b=3,c=3;
	int s,w=0,t=0;
	if(c>0)
		s=a+b;
	if(a<=0)
		if(b>0)
			if(c<=0)
				w=a-b;
			else if (c>0)
				w=a-b;
			else
			    t=c;
			printf("%d,%d,%d\n",s,w,t);
			return 1;
}
*/

//3(2)
/*
#include <stdio.h>
int main()
{
	int a=1,b=2,c=3;
	if(c=a)
		printf("%d\n",c);
	else
		printf("%d\n",b);
	return 1;
}
*/

//4(1)
/*
#include <stdio.h>
int main()
{
	double h,faHeight,moHeight;
	char sex,sports,diet,a;
    printf("请输入父亲和母亲身高:");
	scanf("%lf,%lf", &faHeight, &moHeight);
	a=getchar();
	printf("请输入性别:");
	sex=getchar();
	if(sex == 'M')
		{
			h = (faHeight + moHeight) / 2 * 1.08;
	}
	else
	{
			h = (faHeight * 0.923 + moHeight) / 2;
	}
	printf("请输入是否进行体育锻炼:");
	a = getchar();
	sports = getchar ();
	if(sports == 'Y')
		h = h * 1.02;
	printf("请输入是否营养均衡:");
	a = getchar();
	diet = getchar();
	if(diet == 'Y')
		      h = h * 1.015;
	printf("身高 = %.lf",h);
	return 1;
}
*/

//4(2)
/*
#include <stdio.h>
int main()
{
	int num, a, b, c;
    printf("请输入一个整数:");
	scanf("%d",&num);
	a = num / 100;
	c = num % 10;
	b = num / 10 % 10;
    if (a + b > c || a + c > b || b + c > a)
	{
		if (a == b && a == c)
			{
				printf("是等边三角形");
		}
		else if (a == b || a == c || b == c)
		    {
				printf("是等腰三角形");
		}
		else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
			{
				printf("是直角三角形");
		}
		else 
		{
			printf("是普通三角形");
		}
	}
	else
	{
		printf("不构成三角形");
	}
	return 1;
}
*/

//4(3)
/*
#include <stdio.h>
int main()
{
	int num,a,b,c;    
	printf("请输入一个整数:");
	scanf("%d",&num);
	if (num > 99 && num < 999)
	{
	a=num / 100;
	c=num % 10;
	b=num / 10 % 10;
		if (num == a * a * a + b * b * b + c * c * c)
	   {
		   printf("我是水仙花");
		}
			else
			{
		    printf("我不是水仙花");
			}
	}
	else
	{
	printf("data error");
	}
	
	return 1;
}
*/

//4(4)
/*
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int num;//人猜的数
	int x;//电脑产生的随机数
	srand(time(NULL));
	x=rand()%100 + 1;
	printf("请输入一个1~100的数:");
	scanf("%d",&num);
	if (x == num)
	{
		printf("Right!");
	}
	else if(x < num)
	{
		printf("Too high");
	}
	else
	{
		printf("Too low");
	}
	return 1;
}
*/

//4(5)
/*
#include <stdio.h>
int main()
{
	int num;
	printf("请输入一个0到48的点的编号:");
	scanf("%d",&num);
    if (num < 0 || num >48)
		return 0;
	else
	{
		if(num == 0 || num == 6 || num == 42 || num == 48)
			printf("邻居2个\n");
		else if(num % 7 == 0 || (num + 1) % 7 == 0 || num > 42 || num < 6)
			printf("邻居3个\n");
		else
			printf("邻居4个\n");
	}
	return 1;
}
*/

//4(6)
/*
#include <stdio.h>
int main()
{
	int x;
	printf("输入一个0-6的整数:");
	scanf("%d",&x);
	switch(x)
	{
	case 0:
		printf("星期日");
		break;
    case 1:printf("星期一");break;
	case 2:printf("星期二");break;
	case 3:printf("星期三");break;
	case 4:printf("星期四");break;
	case 5:printf("星期五");break;
	case 6:printf("星期六");break;
	case 7:printf("输入错误!");break;
	default:printf("输入错误!");break;
	}
	return 1;
}
*/