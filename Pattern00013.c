/*

    1
   121
  12321
 1234321
123454321

*/

#include <stdio.h>
int main()
{
    int i, j, k;
    for (int i = 1; i <= 5; i++)
    {
        k = 1;
        for (int j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                printf("%d", k);
                if (j < 5)
                    k++;
                else
                    k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
