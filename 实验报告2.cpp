ʵ�鱨��2
//1���Ԥ��
/*
#include <stdio.h>
int main()
{
	double h,faHeight,moHeight;//h��Ů��ߣ�fa~������ߣ�mo~Ľĸ�����
	char sex,sports,diet,a;
    printf("�����븸�׺�ĸ�����:");
	scanf("%lf,%lf",&faHeight,&moHeight);
	a=getchar();//���ջس�
	printf("�������Ա�:");
	sex=getchar();
	if(sex=='M')
		{
			h=(faHeight+moHeight)/2*1.08;
	}
	else
	{
			h=(faHeight*0.923+moHeight)/2;
	}
	printf("�������Ƿ������������:");
	a=getchar();//���ջس�
	sports=getchar ();
	if(sports=='Y')
		h=h*1.02;
	printf("�������Ƿ�Ӫ������:");
	a=getchar();//���ջس�
	diet=getchar();
	if(diet=='Y')
		      h=h*1.015;
	printf("���=%.lf",h);
	return 1;
}
*/

//2�������ˮ�ɻ���
/*
#include <stdio.h>
int main()
{
	int a,b,c;//a��λ��bʮλ��c��λ
	int x;//100~999����
	for (x=100;x<=999&&x>=100;x++)
	{
		a=x/100;//��λ
		b=x/10%10;//ʮλ
		c=x%10;//��λ
		if (x==a*a*a+b*b*b+c*c*c)
		{
			printf("%d\n",x);
		}
	}
}
*/

//3 �ҳ�1000���ڵ�����

#include <stdio.h>
int main()
{
	int i,j,fac;//i������fac����һ�����Ӻ͵ı�����j����
    for(i=1;i<1000;i++)
	{
		fac=0;//��ʼ��
		for (j=1;j<i;j++)//������
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
					printf(" %d",j);//�������
			}
			printf("\n");
		}
	}
	return 1;
}