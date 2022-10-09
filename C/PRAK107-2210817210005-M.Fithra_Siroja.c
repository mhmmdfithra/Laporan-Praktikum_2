#include<stdio.h>

int main(){
printf("Diketahui :\n");
int s1= 4, s2= 5, s3= 7;
printf("Panjang sisi segitiga berturut-turut adalah 4, 5, dan 7\n");
int keliling= (s1+s2+s3);
printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
int biaya=  85000;
printf("Harga tanah Per Meter adalah %d\n", biaya);
printf("Jawaban:\n");
int total= keliling*biaya;
printf("Biaya yang diperlukan Pak Dengklek adalah: Rp.%d", total);
}