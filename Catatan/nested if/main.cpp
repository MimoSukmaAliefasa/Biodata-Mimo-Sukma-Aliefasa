#include <stdio.h>

int main(){
    int nilaiMTK = 0;
    int nilaiBIND = 0;

    printf("Masukkan nilai Matematika: ");
    scanf("%i",&nilaiMTK);

    if ( nilaiMTK>=80){
        printf("Masukkan nilai Bahasa Indonesia: ");
    scanf("%i",&nilaiBIND);
        if(nilaiBIND>=70){
            printf("Anda Lulus");
        }else{
            printf("Anda Tidak Lulus");
        }
    }else{
        printf("Anda jelas tidak lulus bos!!");
    }
    return 0;
}
