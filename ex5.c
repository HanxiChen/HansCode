
//1(1)
/*
#include <stdio.h>
int main()
{
	float x;
	printf("������һ����x:\n");
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
	printf("������һ������x:\n");
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
	printf("������һ���ַ���");
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
		printf("������������ַ�!\n");
	return 1;
}
*/

//2(3)
/*
#include <stdio.h>
int main()
{
	char ch;
	printf("������һ���ַ�:");
	ch=getchar();
	switch(ch)
	{
	    case'Y':
		case'y':
			printf("ͬ��\n");
			break;
		case'N':
		case'n':
			printf("����\n");
			break;
		default:
			printf("��Ȩ\n");
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
    printf("�����븸�׺�ĸ�����:");
	scanf("%lf,%lf", &faHeight, &moHeight);
	a=getchar();
	printf("�������Ա�:");
	sex=getchar();
	if(sex == 'M')
		{
			h = (faHeight + moHeight) / 2 * 1.08;
	}
	else
	{
			h = (faHeight * 0.923 + moHeight) / 2;
	}
	printf("�������Ƿ������������:");
	a = getchar();
	sports = getchar ();
	if(sports == 'Y')
		h = h * 1.02;
	printf("�������Ƿ�Ӫ������:");
	a = getchar();
	diet = getchar();
	if(diet == 'Y')
		      h = h * 1.015;
	printf("��� = %.lf",h);
	return 1;
}
*/

//4(2)
/*
#include <stdio.h>
int main()
{
	int num, a, b, c;
    printf("������һ������:");
	scanf("%d",&num);
	a = num / 100;
	c = num % 10;
	b = num / 10 % 10;
    if (a + b > c || a + c > b || b + c > a)
	{
		if (a == b && a == c)
			{
				printf("�ǵȱ�������");
		}
		else if (a == b || a == c || b == c)
		    {
				printf("�ǵ���������");
		}
		else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
			{
				printf("��ֱ��������");
		}
		else 
		{
			printf("����ͨ������");
		}
	}
	else
	{
		printf("������������");
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
	printf("������һ������:");
	scanf("%d",&num);
	if (num > 99 && num < 999)
	{
	a=num / 100;
	c=num % 10;
	b=num / 10 % 10;
		if (num == a * a * a + b * b * b + c * c * c)
	   {
		   printf("����ˮ�ɻ�");
		}
			else
			{
		    printf("�Ҳ���ˮ�ɻ�");
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
	int num;//�˲µ���
	int x;//���Բ����������
	srand(time(NULL));
	x=rand()%100 + 1;
	printf("������һ��1~100����:");
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
	printf("������һ��0��48�ĵ�ı��:");
	scanf("%d",&num);
    if (num < 0 || num >48)
		return 0;
	else
	{
		if(num == 0 || num == 6 || num == 42 || num == 48)
			printf("�ھ�2��\n");
		else if(num % 7 == 0 || (num + 1) % 7 == 0 || num > 42 || num < 6)
			printf("�ھ�3��\n");
		else
			printf("�ھ�4��\n");
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
	printf("����һ��0-6������:");
	scanf("%d",&x);
	switch(x)
	{
	case 0:
		printf("������");
		break;
    case 1:printf("����һ");break;
	case 2:printf("���ڶ�");break;
	case 3:printf("������");break;
	case 4:printf("������");break;
	case 5:printf("������");break;
	case 6:printf("������");break;
	case 7:printf("�������!");break;
	default:printf("�������!");break;
	}
	return 1;
}
*/