#include <stdio.h>
#define SIZE 5
void matix_prod(double A[SIZE][SIZE], double B[SIZE][SIZE],double C[SIZE][SIZE]);
void matrix_copy(double dst[SIZE][SIZE], double src[SIZE][SIZE]);

//Ã¶¼ö ¿µÈñ ÈòµÕÀÌ ¹ÙµÏÀÌ Áø±¸ ¼ø¼­
int main(){
    double A[SIZE][SIZE] = { { 0  ,0.3, 0.1, 0  , 0.6},
                             { 0  ,0  , 0.5, 0.4, 0.1},
                             { 0.5,0.4, 0  , 0.1, 0  },
                             { 0  ,0.4, 0  , 0  , 0.6},
                             { 0.4,0  , 0  , 0.6, 0  }
                            };	
    double C[SIZE][SIZE];
    double tmp[SIZE][SIZE];

    matrix_copy(tmp,A);
    
    for(int num=0; num<15;num++){
        matix_prod(A,tmp,C);
        matrix_copy(A,C);
    }
        

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++)
			printf("%lf\t", A[i][j]);
		printf("\n");
	}
}
void matrix_copy(double dst[SIZE][SIZE], double src[SIZE][SIZE]){
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++)
            dst[i][j]=src[i][j];
	}
    
}

void matix_prod(double A[SIZE][SIZE], double B[SIZE][SIZE],double C[SIZE][SIZE]){
    for(int i = 0; i < SIZE; i++){
            for(int j = 0; j < SIZE; j++){
                C[i][j] = 0;
                for(int k = 0; k < SIZE; k++){	
                    C[i][j] = C[i][j]  + (A[i][k] * B[k][j]); 
                    
                }
            }
        }
}