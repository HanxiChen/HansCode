//һ��1(1)
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

//һ��1(2)
/*
#include <stdio.h>
int main()
{
	double f,c;
	printf("�����뻪���¶ȣ�");
	scanf("%lf",&f);
	c = 5 * (f-32) / 9;
	printf("�����¶ȣ�%.1lf�������¶ȣ�%.1lf\n",f,c);
	return 1;
}
*/

//һ��2(1)
/*
#include <stdio.h>
int main()
{
	int a,b,t;
	scanf("%d,%d",&a,&b);
	printf("����ǰa=%d,b=%d\n",a,b);
	t=a;
	a=b;
	b=t;
	printf("������a=%d,b=%d\n",a,b);
	return 1;
}
*/

//һ��2(2)
/*
#include <stdio.h>
int main()
{
	int a,b,c,x;
	scanf("%d",&x);//x��һ����λ��
	c=x/100;
	b=(x/10)%10;
	a=x%10;
	printf("%d�������ǣ�%d\n",x,a*100+b*10+c);
	return 1;
}
*/

//һ��3.(1)
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

//һ��3.(2)
/*
#include <stdio.h>
int main()
{
	char c1,c2;
	c1 = getchar();//�Ӽ�������һ����д�ַ�W
	c2 = c1 + 32;
	putchar(c2);//c2 = w
	return 1;
}
*/

//һ��4.(1)
/*
#include <stdio.h>
int main()
{
	int nodeNum,x_coordinate,y_coordinate;//�ֱ�Ϊ�ڵ��ź�x��y����
	printf("Please input NodeNum:");
	scanf("%d",&nodeNum);
	x_coordinate = nodeNum % 7;//��ڵ����
	y_coordinate = nodeNum % 7;//��ڵ����
	printf("Node(%d) -> (%d,%d)\n",nodeNum,x_coordinate,y_coordinate);
	return 1;
}
*/

//һ��4.(2)
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
	printf("���������ġ���ѧ��Ӣ��ķ���:");
	scanf("%d %d %d", &x, &y, &z);
	per = (x + y + z) / 3;
	printf("�ܷ�%d��ƽ����%.2f\n", x + y + z, per);
	return 1;
}
*/

//4(4)
/*
#include <stdio.h>
int main()
{
	int x, a, b, c;
	printf("������һ����λ����");
	scanf("%d", &x);
    a = x /100;
	b = x / 10 % 10;
	c = x % 10;
	printf("��λ%d��ʮλ%d����λ%d\n", a, b, c);
	return 1;
}
*/