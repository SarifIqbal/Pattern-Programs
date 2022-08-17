/*

*****
****
***
**
*

*/

#include <stdio.h>
int main()
{
    // My
    // Approach
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= 6 - i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    // More Optimised
    // Approach
    for (int a = 1; a <= 5; a++)
    {
        for (int b = 1; b <= 5; b++)
        {
            if (b <= 6 - a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
