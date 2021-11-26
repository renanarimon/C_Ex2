#include "my_mat.h"
#include <stdio.h>

int main()
{
    char x;
    int arrA[100];
    int arrB[2];
    int arrC[2];

    scanf("%c ", &x);
    while (x != 'D')
    {
        scanf("%c ", &x);
        if (x == 'A')
        {
            for (int i = 0; i < 100; i++)
            {
                scanf("%d ", &arrA[i]);
            }
        }
        else if (x == 'B')
        {
            for (int i = 0; i < 2; i++)
            {
                scanf("%d ", &arrB[i]);
            }
            isPath(arrB[0], arrB[1]);
            
        }
        else if (x == 'C')
        {
            for (int i = 0; i < 2; i++)
            {
                scanf("%d ", &arrC[i]);
            }
            findShortPath(arrB[0], arrB[1]);
        }
        
    }
    return 0;
}
