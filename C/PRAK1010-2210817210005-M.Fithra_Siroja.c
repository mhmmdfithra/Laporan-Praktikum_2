#include<stdio.h>
#include<math.h>
        
int main(){
    printf("Diketahui:\n");
int A= 12, C= 5;
    printf("Alas= %d cm\n", C);
    printf("Tinggi= %d cm\n", A);
int B= sqrt(A*A + C*C);
    printf("Jawab:\n");
    printf("Sisi A= %d cm\n", A);
    printf("Sisi B= %d cm\n", B);
    printf("Sisi C= %d cm\n", C);
int keliling = A+B+C;
    printf("Keliling = %d cm\n", keliling);
int luas= A*C/2;
    printf("Luas =%d cm\n", luas);
}