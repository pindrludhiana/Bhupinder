#include<stdio.h>
void main()
{       
        float a,b;
        printf("enter first number\n");
        scanf("%f",&a);
        printf("enter the second nummber\n");
        scanf("%f",&b);
        if(a>b)
                printf("%f is greater\n",a);
        else if(b>a)
                printf("%f is greater\n",b);
        else    
                printf("both numbers are equal\n");
}

Output:

enter first number
3           
enter the second nummber
3
both numbers are equal
