/*p43（1）
#include <stdio.h>
int main()
{
	int a = 5, b= 6, c;
	c = 4 * a * a + a * a * b + 5 * (a-b) * (a-b);
	printf("%d",c);
}
*/

/*p43（2）
#include <stdio.h>
int main()
{
	double pi = 3.14, r = 3;
	double s, c;
	s = pi * r * r;
	c = 2 * pi * r;
	printf("%lf %lf\n",s ,r);
}
*/

//p59（1）
/*
#include <stdio.h>
int main()
{
	int score, grade;
	printf("请输入成绩：");
	scanf("%d",&score);
	grade = score >= 90 ? 'A' : (score >= 60 ? 'B':'C');
	printf("y = %f\n", y);
}
*/

//p59(2)
/*
#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	printf("%d",3 * x * x - 5 * x * x + x - 10);
	return 1;
}
*/

//p60(3)
/*
#include <stdio.h>
int main()
{
	int a, b, c;
	printf("请输入两个两位数a b\n");
	scanf("%d %d",a ,b);
	c = (a / 10) * 1000 + (b/10) * 100 + (a % 10) * 10 + b % 10;
	printf("c = y%d\n",c);
	return 1;
}
*/