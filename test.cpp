/*
#include<stdio.h>
int Fabio(int n)
{
	if(n==1 || n==2)
	{
		return 1;
	}
	return Fabio(n-1)+Fabio(n-2);
}

int Fabio_for(int n)
{
	int f1 = 1;
	int f2 = 1;
	int f3 = 1;
	for(int i=2;i<n;i++)
	{
		f3 = f1+f2;
		f1 = f2;
		f2 = f3;
	}
	return f3;
}
int count = 0;
void Move(char x,char y)
{
	printf("%c->%c\n",x,y);
	count++;
}

void Hanio(int n,char a,char b,char c)
{
	if(n==1)
	{
		Move(a,c);
	}
	else
	{
		Hanio(n-1,a,c,b);
		Move(a,c);
		Hanio(n-1,b,a,c);//在b上通过a挪到c
	}
}

double Faction(double x1,double x2)
{
	const double e = 0.000001;
	double x=(x1+x2)/2;
	double d = 1;
	while(d>e || d<-e)
	{
		d=2*x*x*x-4*x*x+3*x-6;
		if(d>0)
		{
			x2 = x;
			x = (x1+x2);
		}
		else
		{
			x1 = x;
			x = (x1+x2);
		}
	}
	return d;
}

void Match()
{
	char a;
	char b;
	char c;
	for(a='X';a<='Z';a++)
	{
		for(b='X';b<='Z';b++)
		{
			for()
		}
	}
}

int main()
{
	printf("%lf\n",Faction(4,-4));
	//printf("%d\n",Fabio(4));
	//printf("%d\n",Fabio_for(4));
	//Hanio(1,'A','B','C');
	//Hanio(4,'A','B','C');
	//printf("%d\n",count);//2的n次方-1；
	return 0;
}
*/
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int *p = arr;
	p++;
	*p = 20;
	p++; 
}
int main()
{
	int a = 10;
	int b = 20;
	int *p = &a;
	*p = 100;
	p = &b;
	*p = 200;
	int **pp = &p;
	*pp=&a;//p = &a
	**pp = 1000;//a=1000
	return 0;

}