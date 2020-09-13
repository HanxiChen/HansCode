//一、1(1)
/*
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d,%d",&a,&b);
	printf("%d + %d = %d",a , b, a+b);
	return 1;
}
*/

//一、1(2)
/*
#include <stdio.h>
int main()
{
	double f,c;
	printf("请输入华氏温度：");
	scanf("%lf",&f);
	c = 5 * (f-32) / 9;
	printf("华氏温度：%.1lf→摄氏温度：%.1lf\n",f,c);
	return 1;
}
*/

//一、2(1)
/*
#include <stdio.h>
int main()
{
	int a,b,t;
	scanf("%d,%d",&a,&b);
	printf("交换前a=%d,b=%d\n",a,b);
	t=a;
	a=b;
	b=t;
	printf("交换后a=%d,b=%d\n",a,b);
	return 1;
}
*/

//一、2(2)
/*
#include <stdio.h>
int main()
{
	int a,b,c,x;
	scanf("%d",&x);//x是一个三位数
	c=x/100;
	b=(x/10)%10;
	a=x%10;
	printf("%d的逆序是：%d\n",x,a*100+b*10+c);
	return 1;
}
*/

//一、3.(1)
/*
#include <stdio.h>
int main()
{
	float a;
	int b;
	b = a = 24.5 / 5;
	printf("%f,%d",a,b);//a = 4.9  b = 4
	return 1;
}
*/

//一、3.(2)
/*
#include <stdio.h>
int main()
{
	char c1,c2;
	c1 = getchar();//从键盘输入一个大写字符W
	c2 = c1 + 32;
	putchar(c2);//c2 = w
	return 1;
}
*/

//一、4.(1)
/*
#include <stdio.h>
int main()
{
	int nodeNum,x_coordinate,y_coordinate;//分别为节点编号和x，y坐标
	printf("Please input NodeNum:");
	scanf("%d",&nodeNum);
	x_coordinate = nodeNum % 7;//求节点的列
	y_coordinate = nodeNum % 7;//求节点的行
	printf("Node(%d) -> (%d,%d)\n",nodeNum,x_coordinate,y_coordinate);
	return 1;
}
*/

//一、4.(2)
/*
#include <stdio.h>
int main()
{
	int a,b,c,x,y,z,h;
	scanf("%d,%d",&a,&b);
	x = a / 10;
	y = a % 10;
	z = b / 10;
	h = b % 10;
	printf("c = %d\n",c,c = x * 1000 + z * 100 + y * 10 + h);
	return 1;
}
*/

//4(3)
/*
#include <stdio.h>
int main()
{
	int x, y, z;
	float per;
	printf("请输入语文、数学、英语的分数:");
	scanf("%d %d %d", &x, &y, &z);
	per = (x + y + z) / 3;
	printf("总分%d，平均分%.2f\n", x + y + z, per);
	return 1;
}
*/

//4(4)
/*
#include <stdio.h>
int main()
{
	int x, a, b, c;
	printf("请输入一个三位数：");
	scanf("%d", &x);
    a = x /100;
	b = x / 10 % 10;
	c = x % 10;
	printf("百位%d，十位%d，个位%d\n", a, b, c);
	return 1;
}
*/