/*

1
6 2
10 7 3
13 11 8 4
15 14 12 9 5

*/

#include <stdio.h>
int main()
{
    int i, j, row = 0, p, k = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        p = k;
        for (j = 1; j <= i; j++)
        {
            printf("%d ", p);
            p = p - (row - i + j);
        }
        printf("\n");
        k = k + 1 + row - i;
    }
    return 0;
}
