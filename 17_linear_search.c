

#include <stdio.h>

int main()
{
int array[100], search, c, n;

printf("Enter the number of elements in array\n");
scanf("%d",&n);

printf("Enter %d integer(s)\n", n);

for (c = 0; c < n; c++)
scanf("%d", &array[c]);

printf("Enter the number to search\n");
scanf("%d", &search);

/* We keep on comparing each element with the element to search until the desired element is found or list ends */
for (c = 0; c < n; c++)
{
if (array[c] == search){
/* if required element found*/
printf("%d is present at location %d.\n", search, c+1);
break;
}
}
if (c == n)
printf("%d is not present in array.\n", search);

return 0;
}

Output:

Enter the number of elements in array
5
Enter 5 numbers
5
6
4
2
9
Enter the number to search
4 is present at location 3.

