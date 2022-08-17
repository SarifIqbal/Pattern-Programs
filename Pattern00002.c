/*

*
**
***
****
*****

*/

#include <stdio.h>
int main()
{
    // My
    // Approach
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    // More Optimised
    // Approach
    for (int a = 1; a <= 5; a++)
    {
        for (int b = 1; b <= 5; b++)
        {
            if (b <= a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
