#include<stdio.h>
#include<math.h>
int mian()
{
	int a,b,c;
	float area,p;
	printf("Enter the side of triangle:A\nB\nc\n");
	scanf("%d%d%d",&a,&b,&c);
	p=(a+b+c)/2;
    area=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("the area of triangle:%f",area);
    return 0;
	My Name is tarun
	
}