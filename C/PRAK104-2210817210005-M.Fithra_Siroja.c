#include <stdio.h>

int main(){
    float diskonA= 0.13 , diskonB= 0.21;
    int sepatuA= 400000, sepatuB=350000;
    int discA= sepatuA*diskonA;
    int discB= sepatuB*diskonB;
    int totalA= sepatuA-discA;
    int totalB= sepatuB-discB;
    printf("Harga sepatu A adalah %d\n",sepatuA);
    printf("Harga sepatu B adalah %d\n",sepatuB);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n",totalA);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", totalB);
}
    