实验报告1
//1 
/*
#include <stdio.h>
int main()
{
	int a=5,b=6,c;
	c=4*a*a+3*a*b+5*(a-b)*(a-b);
	printf("c=%d\n",c);
	return 1;
}
*/

//2(1)
/*
#include <stdio.h>
int main()
{
	double f1=35.6789;
	printf("f1=%5.3lf\n",f1);
}
*/

//2(2)
/*
#include <stdio.h>
int main()
{
	float f1=100.12345;
	printf("f1=%.2lf\n",f1);
	float f2=20.46;
	printf("f2=  %.1lf\n",f2);
	float f3=3.5;
	printf("f3=  %.lf\n",f3);
	int n=12;
	printf("n=   %d\n",n);
}
*/


//3(4)

#include <stdio.h>
int main()
{
	char a,b;
	int c;
	scanf("%c%*c%c%*c%d",&a,&b,&c);
	printf("'%c','%c',%d\n",a,b,c);
}
