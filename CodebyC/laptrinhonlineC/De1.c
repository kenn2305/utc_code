#include <stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int a[n];
    for ( int i = 0 ; i < n ; i++){
        scanf("%d",&a[i]);
    }
    //tim so cap co tong bang 10
    int check = 0;
    for ( int i = 0 ; i < n-1 ; i++){
        for ( int j = i ; j < n ; j++){
            if (a[i]+a[j]==10){
                check=1;
                break;
            }
        }
    }
    if (check == 1){
        printf("Cac cap co tong bang 10 la : \n");
        int k = 0;
        for ( int i = 0 ; i < n-1 ; i++){
            for ( int j = i ; j < n ; j++){
                if (a[i]+a[j]==10){
                    k++;
                    printf("Cap so thu %d : %d %d\n",k,a[i],a[j]);
                }
            }
        }
    } else {
        printf("Khong co cap so nao thoa man tong bang 10 !!!!!");
    }
    //tinh trung binh cong cac so chia het cho 3
    int cnt = 0 ;
    int sum = 0 ;
    for ( int i = 0 ; i < n ; i++){
        if (a[i] % 3 == 0){
            sum+=a[i];
            cnt++;
        }
    }
    if (cnt > 0){
        printf("Trung binh cong cac so chia het cho 3 la : %.2f",(double)sum/cnt);
    } else {
        printf("Khong co gia tri chia het cho 3 trong mang!!!!\n");
    }
    return 0;
}