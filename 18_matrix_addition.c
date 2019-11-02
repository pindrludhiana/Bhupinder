

#include <stdio.h>

int main()
{
int m, n, c, d, first[10][10], second[10][10], sum[10][10];

printf("Enter the number of rows and columns of matrix\n");

scanf("%d%d", &m, &n);
printf("Enter the elements of first matrix\n");

for ( c = 0 ; c < m ; c++ )
for ( d = 0 ; d < n ; d++ )
scanf("%d", &first[c][d]);

printf("Enter the elements of second matrix\n");

for ( c = 0 ; c < m ; c++ )
for ( d = 0 ; d < n ; d++ )
scanf("%d", &second[c][d]);

for ( c = 0 ; c < m ; c++ )
for ( d = 0 ; d < n ; d++ )
sum[c][d] = first[c][d] + second[c][d];
/* Matrix addition */

printf("Sum of entered matrices:-\n");

for ( c = 0 ; c < m ; c++ )
{
for ( d = 0 ; d < n ; d++ )
printf("%d\t", sum[c][d]);

printf("\n");
}

return 0;
}

Output:

Enter the number of rows and columns of matrix
2
2

Enter the elements of first matrix
1 2
3 4

Enter the elements of second matrix
5 6
2 1
Sum of entered matrices:-
6 8
5 5

