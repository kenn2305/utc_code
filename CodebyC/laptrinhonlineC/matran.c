#include <stdio.h>
int main(){
    printf("Nhap vao kich thuoc cua ma tran :");
    int n ;
    scanf("%d" , &n);
    int a[100][100];
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < n ; j++){
            scanf("%d" , &a[i][j]);
        }
    }
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < n ; j++){
            printf("%d " , a[i][j]);
        }
        printf("\n");
    }
    int sum1 = 0 ;
    int sum2 = 0 ;
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < n ; j++){
            if(i==j){
                sum1+=a[i][j];
            }
            if (i+j == n-1){
                sum2+=a[i][j];
            }
        }
    }
    printf("TONG TREN DUONG CHEO CHINH LA : %d" , sum1);
    printf("TONG TREN DUONG CHEO PHU LA : %d" ,sum2);
    return 0;
}