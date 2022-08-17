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
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
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
            if (b >= 6 - a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
