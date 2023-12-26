#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
struct SV{
    char ten[1000];
    float diem;
    char truong ;
};
typedef struct SV SV ;
void nhap(SV *a){
    printf("Nhap ho va ten :");
    fflush(stdin);
    gets(a->ten);
    printf("Nhap diem :");
    scanf("%f" , &a->diem);
    fflush(stdin);
    printf("Nhap truong :");
    scanf("%c" , &a->truong);
}
void in(SV a){
    printf("Ho va ten : %s\nDiem : %.2f\nTruong : %c\n" , a.ten , a.diem , a.truong);
}
void timkiem(char tk[100] , int n , SV a[]){
    for ( int i = 0 ; i < n ; i++){
        if (strcmp(tk , a[i].ten)== 0){
            printf("Da tim thay sinh vien !!!! \n");
            in(a[i]);
            return;
        }
    }
    printf("Khong tim thay sinh vien !!!! \n");
}
int main(){
    int n ;
    printf("Nhap so luong sinh vien : ") ;
    scanf("%d" , &n);
    SV a[n];
    for ( int i = 0 ; i < n ; i++){
        printf("Nhap vao sinh vien thu : % d\n" , i+1);
        nhap(&a[i]);
    }
    for ( int i = 0 ; i < n ; i++){
        printf("Sinh vien thu : %d \n" , i+1);
        in(a[i]);
    }
    printf("Nhap ten sinh vien can tim kiem :");
    char tk[100];
    fflush(stdin);
    gets(tk);
    timkiem(tk,n,a);
    return 0;
}