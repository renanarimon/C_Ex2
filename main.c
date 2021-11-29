#include "my_mat.h"
#include <stdio.h>

#define SIZE 10
#define INFINITY 100000000000

int main()
{
    char x='N'; //only temporary
    int arrA[SIZE][SIZE]={0}; 

    while (x!='D')
    {
        scanf("%c", &x);
        switch(x){
        
        case 'A':
        CreateMat(arrA);
        break;

        case 'B':
        isPath(arrA);
        break;

        case 'C':
        shortPath(arrA);
        break;

        }
        
    }
}
