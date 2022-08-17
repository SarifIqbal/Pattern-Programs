/*

*********
**** ****
***   ***
**     **
*       *

*/

#include <stdio.h>
int main()
{
    // My
    // Approach
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j >= 7 - i && j <= i + 3)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    // Different
    // Approach
    for (int a = 1; a <= 5; a++)
    {
        for (int b = 1; b <= 9; b++)
        {
            if (b <= 6 - a || b >= 4 + a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
