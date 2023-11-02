#include <stdio.h>
#include <stdlib.h>

int main(){
    int M1_row=2 , M2_col=3 , M1_col_M2_row =2;
    int a[M1_row][M1_col_M2_row] , b[M1_col_M2_row][M2_col] , res[M1_row][M2_col];

    for (int i=0 ; i<M1_row ;i++)
        for(int j=0 ;j<M2_col ;j++)
            res[i][j]=0;

    for (int i=0 ;i<M1_row ;i++)
        for(int j=0 ;j<M1_col_M2_row ;j++)
            scanf("%i" , &a[i][j]);

    for (int i=0 ;i<M1_col_M2_row ;i++)
        for(int j=0 ;j<M2_col ;j++)
            scanf("%i" , &b[i][j]);

    for (int i=0 ; i<M1_row ;i++){
        for(int j=0 ;j<M2_col ;j++){
            for(int x=0 ;x<M1_col_M2_row ;x++){
                res[i][j] += a[i][x] * b[x][j];
            }
        }
    }

       for (int i=0 ; i<M1_row ;i++){
        for(int j=0 ;j<M2_col ;j++){
            printf("%i \t",res[i][j]);
        }
        printf("\n");
    }

    return 0;
}






