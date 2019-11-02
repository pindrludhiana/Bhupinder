

#include <stdio.h>

void bubble_sort(long [], long);

int main()
{
long array[100], n, c, d, swap;

printf("Enter number of elements\n");
scanf("%ld", &n);

printf("Enter %ld integers\n", n);

for (c = 0; c < n; c++)
scanf("%ld", &array[c]);

bubble_sort(array, n);

printf("Sorted list in ascending order:\n");

for ( c = 0 ; c < n ; c++ )
printf("%ld\n", array[c]);

return 0;
}

void bubble_sort(long list[], long n)
{
long c, d, t;

for (c = 0 ; c < ( n - 1 ); c++)
{
for (d = 0 ; d < n - c - 1; d++)
{
if (list[d] > list[d+1])
{
/* Swapping */
t = list[d];
list[d] = list[d+1];
list[d+1] = t;
}
}
}
}

Output:

Enter number of elements
6

Enter 6 integers
2
-4
7
8
4
7

Sorted list in ascending order:
-4
2
4
7
7
8

