#include<stdio.h>
int main()
    { 
    for(int i=1;i<=30;i++) 
        { if(i%15==0) 
        printf("fizzbuzz\n"); 
        else if(i%5==0) 
        printf("buzz\n"); 
        else if(i%3==0) 
        printf("fizz\n"); 
        else {printf("%d\n",i);
            } 
        } 
    return 0;}
OUTPUT:
1                      
2                               
fizz                    
4                               
buzz                    
fizz            
7       
8
fizz
buzz
11
fizz
13
14
fizzbuzz
16
17
fizz
19
buzz
fizz
22
23
fizz
buzz
26
fizz
28
29
fizzbuzz
