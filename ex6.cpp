//1(1)
/*
#include <stdio.h>
int main()
{
	float e,item;
	int i,j,n;
	printf("������n:");
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
			if(i%3)//i����3ȡ����, ������Ϊ0ʱΪ��ȷ, ��i����3�ı���Ϊ��ȷ
				continue;
			n++;
		}while(!i);
		n++;
	}
	printf("n=%d\n",n);
	return 1;
}
*/


//3(1)ͳ������ż���ĸ���
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
	printf("ż��������%d������������%d\n",even_Num,odd_Num);
	return 1;
}
*/

//3(2)
/*
#include <stdio.h>
int main()
{
	int i,j,fac;//i������fac����һ�����Ӻ͵ı�����j����
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


//4(1)������Ϸ1
/*
#include <stdio.h>
#include <time.h>
#include<stdlib.h>
int main()
{
	int x,y,n;
	srand (time(NULL));
	x=rand()%100+1;
	printf("������һ����:");
	scanf("%d",&y);
	n=1;
	if(x==y)
		{
			printf("������Ϸ\n");
			printf("��Ϸ����%d\n",n);
	}
	else
	{
		while(x!=y)
	{
		if(x<y)
		{
			printf("����\n");
			scanf("%d",&y);
			n=n++;
		}
		else
		{
		printf("С��\n");
		scanf("%d",&y);
		n=n++;
		}
	}
	}
	printf("������Ϸ\n");
	printf("��Ϸ����%d\n",n);
	return 1;
}
*/

//4(2)������Ϸ2
/*
#include <stdio.h>
#include <time.h>
#include<stdlib.h>
int main()
{
	int x,y,n;
	srand (time(NULL));
	x=rand()%100+1;
	printf("������һ����:");
	scanf("%d",&y);
	n=1;
	if(x==y)
		{
			printf("������Ϸ\n");
			printf("��Ϸ����%d\n",n);
		}
	else
	{
		while(x!=y)
		{
			if(x<y)
			{
				printf("����\n");
				scanf("%d",&y);
				n=n++;
			}
			else
			{
			printf("С��\n");
			scanf("%d",&y);
			n=n++;
			}
			if (n>=10)
				break;
		}
	}
	printf("������Ϸ\n");
	printf("��Ϸ����%d\n",n);
	return 1;
}
*/

//4(3)
/*
#include <stdio.h>
int main()
{
	int x;//ƻ������
	int per;//ƽ����
	int day=1;
	int money=1.6;
	for(x=2;x<100;day++)
	{
		x=x+2*x;
		money=money+2*x*0.8;
	}
	per=money/day;
	printf("ƽ��ÿ��Ҫ%dԪ",per);
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
		printf("Բ�������%lf\n",S);
	}
	return 1;
}
*/

//4(5)�����ж�
/*
#include <stdio.h>
int main()
{
	int year;
	do
	{
	printf("������һ����ݣ�");
	scanf("%d",&year);
	
	
	if(year==-1)
	{
		printf("�������");
		break;
	}
	else 
		
		if ((year%400==0)||(year%4==0&&year%100!=0))
		{
			printf("����\n");
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

//4(7)�˵���������
/*
#include <stdio.h>
int main()
{
	int x,y,z;//�����������
	int n;//����Ҫ�Ĳ˵���
	int a,b=1;//ѭ������
	int num=1;//�����Ľ׳�
	int i,m=0;//i����ѭ������,mÿ�γ�������
	do
	{
		printf("��������Ҫ�Ĳ˵���(�����׳�����1���������ж�����2����ż���ж�����3���˳�����4):");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("������һ������:");
				scanf("%d",&x);
					for(a=1;a<=x;a++)
					{
						num=num*a;
					}
				printf("%d\n",num);
				break;
			case 2:
				printf("������һ������:");
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
						printf("%d������\n",y);
				}	
				else
				{
					printf("%d��������\n",y);
				}
				
				break;
			case 3:
				printf("������һ������:");
				scanf("%d",&z);
				if (z%2==0) 
					printf("ż��\n");
				else 
					printf("����\n");
				break;
			case 4:
				break;
		}
		continue;
 	}while("%c"!="�˳�");
	return 1;
}
*/