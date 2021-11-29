#include <stdio.h>
#include "my_mat.h"

#define SIZE 10
#define INFINITY 100000000

int min(int a, int b){
return (a < b ? a : b);
}

void CreateMat(int arr[][SIZE])
{

	for (int i = 0;  i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			(scanf("%d", &arr[i][j]));
            if(i!=j && arr[i][j]==0){
                arr[i][j]=INFINITY;
            }
            
		}
	}
	FWAlgo(arr);
}

void FWAlgo(int arr[][SIZE]){
    for(int k=0; k<SIZE; k++){
        for(int i=0; i<SIZE; i++){
            for(int j=0; j< SIZE; j++){
                int a= arr[i][j];
                int b= arr[i][k]+arr[k][j];
                arr[i][j] = min(a,b);
            }
        }
    }
}

void isPath(int arr[][SIZE]){
    int i;
    int j;
    scanf(" %d%d",&i,&j);
    if(arr[i][j]!=0 && arr[i][j]<INFINITY){
        printf("True\n");
    } else{
        printf("False\n");
    }
}

void shortPath(int arr[SIZE][SIZE]){
    int i=0;
    int j=0;
    scanf(" %d%d",&i, &j);
    if(arr[i][j]!=0 && arr[i][j]<INFINITY){
        printf("%d\n", arr[i][j]);
    } else{
        printf("%d\n",-1);
    }
}



