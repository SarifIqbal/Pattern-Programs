/*

6543210
543210
43210
3210
210
10
0

*/

#include <stdio.h>
int main()
{
    // My
    // Approach
    for (int i = 6; i >= 0; i--)
    {
        for (int j = 6; j >= 0; j--)
        {
            if (j <= i)
                printf("%d", j);
        }
        printf("\n");
    }
    // Different
    // Approach
    int a, b, c;
    for (a = 1; a <= 7; a++)
    {
        c = 7 - a;
        for (int b = 1; b <= 7; b++)
        {
            if (b <= 8 - a)
            {
                printf("%d", c);
                c--;
            }
        }
        printf("\n");
    }
    return 0;
}
