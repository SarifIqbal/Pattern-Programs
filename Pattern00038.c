/*

           0
          1 2 1
         2 3 4 3 2
        3 4 5 6 5 4 3
       4 5 6 7 8 7 6 5 4
      5 6 7 8 9 0 9 8 7 6 5
     6 7 8 9 0 1 2 1 0 9 8 7 6
    7 8 9 0 1 2 3 4 3 2 1 0 9 8 7
   8 9 0 1 2 3 4 5 6 5 4 3 2 1 0 9 8  
  9 0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0 9
 0 1 2 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 2 1 0
  9 0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0 9
   8 9 0 1 2 3 4 5 6 5 4 3 2 1 0 9 8
    7 8 9 0 1 2 3 4 3 2 1 0 9 8 7
     6 7 8 9 0 1 2 1 0 9 8 7 6
      5 6 7 8 9 0 9 8 7 6 5
       4 5 6 7 8 7 6 5 4
        3 4 5 6 5 4 3
         2 3 4 3 2
          1 2 1
           0

*/

#include <stdio.h>
int main()
{
    int i, j, k = 1, n = 11, m = 0;
    for (i = 1; i <= 21; i++)
    {
        i <= n ? m++ : m--;
        k = m - 1;
        for (j = 1; j <= 21; j++)
        {
            if (j >= n + 1 - m && j <= n - 1 + m)
                printf(" %d", j < n ? k++ % 10 : k-- % 10);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
