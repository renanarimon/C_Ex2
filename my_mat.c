#include <stdio.h>
#include "my_mat.h"

static int mat[10][10];

#define min(a, b)                   \
    (                               \
        {                           \
            __typeof__(a) _a = (a); \
            __typeof__(b) _b = (b); \
            _a <= _b ? _a : _b;     \
        })

int new_mat(int input[100])
{
    int k = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; i++)
        {
            mat[i][j] = input[k];
        }
    }
    return 0;
}

int isPath(int i, int j)
{
    if (mat[i][j] != 0)
    {
        printf("True\n");
        return 0;
    }
    else
    {
        for (int k = 1; i <= 10; k++)
        {
            for (int m = 1; m <= 10; m++)
            {
                for (int n = 1; n <= 10; n++)
                {
                    if ((mat[m][k] + mat[k][n]) != 0)
                    {
                        printf("True\n");
                        return 0;
                    }
                }
            }
        }
    }
    printf("False\n");
    return 0;
}

int findShortPath(int i, int j)
{
    if (isPath(i, j)==0)
    {
        printf("%d\n", -1);
        return 0;
    }
    int (*pmat)[10][10];
    pmat = &mat;

    for (int k = 1; i <= 10; k++)
    {
        for (int m = 1; m <= 10; m++)
        {
            for (int n = 1; n <= 10; n++)
            {
                int a = *pmat[m][n];
                int b = *pmat[m][k] + *pmat[k][n];
                *pmat[m][n] = min(a, b);
            }
        }
    }
    printf("%d\n", *pmat[i][j]);
    return 0;
}