#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
struct sinhvien{
    char name[100];
    float point ;
    char school ;
};
typedef struct sinhvien SV ;
void nhap(SV *a){
    printf(" Nhap ho va ten : ");
    getchar();
    fgets(a->name,sizeof (a->name),stdin);
    printf(" Nhap diem :");
    scanf("%f" , &a->point);
    getchar();
    printf(" Nhap truong :");
    scanf("%c" , &a->school);
}
void in(SV a){
    printf("Ho va ten : %s" , a.name);
    printf("Diem : %2f \n" , a.point );
    printf("Truong : %c \n",a.school);
}
void timkiem(int n , SV a[] , char c[100]){
    for ( int i = 0 ; i < n ; i++){
        if (strcmp(c,a[i].name)==0){
            printf("DA TIM THAY SINH VIEN \n");
            in(a[i]);
            return;
        }
    }
    printf("KHONG TIM THAY SINH VIEN \n");
}
void tkMAX(int n , SV a[]){
    float MAX = INT_MIN ;
    for ( int i = 0 ; i < n ; i++){
        if (a[i].point > MAX){
            MAX = a[i].point;
        }
    }
    for ( int i = 0 ; i < n ; i++){
        if (MAX == a[i].point){
            in(a[i]);
        }
    }
}
void tongcactruong(int n , SV a[]){
    float sumA = 0;
    float sumB = 0;
    float sumC = 0;
    for ( int i = 0 ; i < n ; i++){
        if(a[i].school == 'A'){
            sumA+=a[i].point;
        } else if (a[i].school == 'B'){
            sumB+=a[i].point;
        } else if (a[i].school == 'C'){
            sumC+=a[i].point;
        }
    }
    if(sumA == 0){
        printf("Truong A khong co thi sinh tham gia \n");
    } else {
        printf("Tong diem truong A la : %2f\n" , sumA);
    }
    if (sumB == 0){
        printf("Truong B khong co thi sinh tham gia  \n");
    } else {
        printf("Tong diem truong B la : %2f\n" , sumB);
    }
    if(sumC == 0){
        printf("Truong C khong co thi sinh tham gia \n");
    } else {
        printf("Tong diem truong C la : %2f \n" , sumC);
    }
    float max = sumA ;
    if (max < sumB){
        max = sumB;
    }
    if(max <sumC ){
        max = sumC;
    }
    if (max == sumA){
        printf("Truong A co tong diem lon nhat \n");
    } else if (max == sumB){
        printf("Truong B co tong diem lon nhat \n");
    } else if(max == sumC){
        printf("Truong C co tong diem lon nhat \n");
    }
}
void sapxep(int n , SV a[]){
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < n ; j++){
            if (a[i].point < a[j].point){
                SV tmp = a[i];
                a[i] = a[j];
                a[j] = tmp ;
            }
        }
    }
}

int main(){
    printf("Nhap so luong sinh vien :");
    int n ;
    scanf("%d" , &n);
    SV a[n];
    for ( int i = 0 ; i < n ; i++){
        printf("Nhap sinh vien %d : \n" , i+1);
        nhap(&a[i]);
    }
    printf("Danh sach sinh vien : \n");
    for ( int i = 0 ; i < n ; i++){
        printf("Sinh vien thu %d \n" , i+1);
        in(a[i]);
    }
    printf("NHAP TEN SINH VIEN CAN TIM : \n");
    char c[100] ;
    getchar();
    fgets(c,sizeof(c) , stdin);
    timkiem(n,a,c);
    printf("Sinh vien co diem cao nhat : \n");
    tkMAX(n,a);
    printf("THONG KE THEO DIEM CAC TRUONG : \n");
    tongcactruong(n,a);
    printf("DANH SACH SINH VIEN SAU KHI SAP XEP THEO DIEM :\n");
    sapxep(n,a);
    for ( int i = 0 ; i < n ; i++){
        printf("Sinh vien thu %d \n" , i+1);
        in(a[i]);
    }
    printf("Sinh vien co diem cao nhat cua cac truong : \n");
    return 0;
}