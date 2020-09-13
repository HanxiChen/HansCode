//一、1(1)
/*
#include <stdio.h>
int main()
{
	int a = 3,b = 4,d = 5;
	float e = 2.5,res;
	res = (a + b*b) / (d + e);
	printf("res = %0.2lf\n",res);
	return 1;
}
*/

//一、2(1)
/*
#include <stdio.h>
int main()
{
	int x,y,z,max;
	x=3,y=4,z=5;
    max = x > y ? x : y;
	max = (max > z ? max : z);
	printf("max=%d\n",max);
	return 1;
}
*/

//一、2(2)
/*
#include <stdio.h>
int main()
{
	int x=5,res;
	res = 3 * x * x + 2 * x + 5;
	printf("res = %d\n",res);
	return 1;
}
*/

//一、3.(3)
/*
#include <stdio.h>
int main()
{
	int a=7;
	float x=2.5,y=4.7,z;
	z=x+a%3*(int)(x+y)%2/4;
	printf("%.lf\n",z);
	return 1;
}
*/

//一、3（4）
/*
#include<stdio.h>
int main()
{
	int a = 2, b = 3, c = 4;
	printf("%d\n",a + b > 3 * c);
	return 1;
}
*/

//二、1.
/*
#include <stdio.h>
int main()
{
   int a,b,c;
   a = 5, b = 6;
   c = 4 * a * a + 3 * a * b + 5 * (a-b) * (a-b);
   printf("%d\n",c);
   return 1;
}
*/