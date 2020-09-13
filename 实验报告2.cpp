实验报告2
//1身高预测
/*
#include <stdio.h>
int main()
{
	double h,faHeight,moHeight;//h子女身高，fa~父亲身高，mo~慕母亲身高
	char sex,sports,diet,a;
    printf("请输入父亲和母亲身高:");
	scanf("%lf,%lf",&faHeight,&moHeight);
	a=getchar();//吸收回车
	printf("请输入性别:");
	sex=getchar();
	if(sex=='M')
		{
			h=(faHeight+moHeight)/2*1.08;
	}
	else
	{
			h=(faHeight*0.923+moHeight)/2;
	}
	printf("请输入是否进行体育锻炼:");
	a=getchar();//吸收回车
	sports=getchar ();
	if(sports=='Y')
		h=h*1.02;
	printf("请输入是否营养均衡:");
	a=getchar();//吸收回车
	diet=getchar();
	if(diet=='Y')
		      h=h*1.015;
	printf("身高=%.lf",h);
	return 1;
}
*/

//2输出所有水仙花数
/*
#include <stdio.h>
int main()
{
	int a,b,c;//a百位，b十位，c各位
	int x;//100~999的数
	for (x=100;x<=999&&x>=100;x++)
	{
		a=x/100;//百位
		b=x/10%10;//十位
		c=x%10;//个位
		if (x==a*a*a+b*b*b+c*c*c)
		{
			printf("%d\n",x);
		}
	}
}
*/

//3 找出1000以内的完数

#include <stdio.h>
int main()
{
	int i,j,fac;//i完数，fac保存一个因子和的变量，j因子
    for(i=1;i<1000;i++)
	{
		fac=0;//初始化
		for (j=1;j<i;j++)//求因子
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
					printf(" %d",j);//输出因子
			}
			printf("\n");
		}
	}
	return 1;
}