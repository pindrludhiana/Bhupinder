#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the three numbers which you want to compare \n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("\n%d is the greatest number\n",a);
else if(b>a&&b>c)
printf("\n%d is the greatest number\n",b);
else 
printf("\n%d is the greatest number\n",c);
}


OUTPUT:
enter the three numbers which you want to compare 
1
13
8
13 is the greatest number
