#include<stdio.h>
int main(){
    int a, b;
    printf("Moi ban nhap vao so nguyen duong: ");
    scanf("%d", &a);
    if(a > 0){
        for(b = 1; b<= a; b = b + 1){
            if(a % b == 0){
                printf("Uoc cua so nguyen duong la: %d\n", b);
            }
            } else {
        printf("nhap so nguyen duong!\n");
    }
        }
    
    return 0;
}