/*

    1
   212
  32123
 4321234
543212345

*/

#include <stdio.h>
int main()
{
    int i, j, k = 0;
    for (i = 1; i <= 5; i++)
    {
        k = i;
        for (j = 1; j <= 17; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                printf("%d", k);
                j < 5 ? k-- : k++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
