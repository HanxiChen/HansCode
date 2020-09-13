//一、1（1）
/*
#include <stdio.h>
int main()
{
	int a,b;
	a=7;
	b=a++;
    printf("a=%d,b=%b\n",a,b);
	return 1;
}
*/

//1(2)
/*#include <stdio.h>
int main()
{
	int x,y,z;
	x=15;y=5;
	z=x%y;
	printf("x/y的余数=%d\n",z);
	return 1;
}
*/

//1(3)
/*
#include <stdio.h>
int main()
{
	int x,y,z;
	x=4,y=4;
	z=x>=y;
	printf("z=%d\n",z);
	return 1;
}
*/

//2(1)
/*
#include <stdio.h>
int main()
{
	char c1,c2;
	c1='a';
	c2='A';
	printf("c1=%c,c2=%d\n",c1,c2);
	return 1;
}
*/

//2(2)
/*
#include <stdio.h>
int main()
{
	double pi=3.14;
	float r=5.5;
	double s_circle;
	s_circle=r*r*pi;
	printf("Area=%0.2lf\n",s_circle);
	return 1;
}
*/

//3(3)
/*
#include <stdio.h>
int main()
{
	int a = 3, b = 5;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d, b = %d\n", a, b);
	return 1;
}
*/

//3(1)
/*
#include <stdio.h>
int main()
{
	int x=3,y=4;
	x*=y+1;//x=x*(y+1)
	printf("x=%d\n",x);
	return 1;
}
*/

//3(2)
/*
#include <stdio.h>
int main()
{
	char ch='T';//'T'=84
	ch=ch+32;
	printf("ch=%c\n",ch);
	return 1;
}
*/

//3(3)
/*
#include <stdio.h>
int main()
{
	int a=3,b=5;
	a=a^b;//互换ab的值
	b=a^b;
	a=a^b;
	printf("a=%d,b=%d\n",a,b);
	return 1;
}
*/

//二、(1)
/*
#include <stdio.h>
int main()
{
	printf("%d\n",5&&2);
	printf("%d\n",5&2);
}
*/

//二、(2)
/*
#include <math.h>
int main()
{
	printf("%0.2lf", 5/2);
}
*/