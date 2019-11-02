

#include <stdio.h>

int main()
{
int first, second, sum;

printf("Enter two integers to add\n");
scanf("%d%d", &first, &second);

sum = first + second ;
/*Adding contents of first and second and storing in sum*/

printf("Sum of entered numbers = %d\n",sum);

return 0;
}

Output:
 
Enter two integers to add
4
5
Sum of entered numbers = 9
