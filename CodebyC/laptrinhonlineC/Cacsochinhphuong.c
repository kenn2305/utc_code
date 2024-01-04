#include <stdio.h>
#include <math.h>
int check(int a){
    int sqr_n = sqrt(a);
    return a == sqr_n*sqr_n ;
}
int main(){
    int n ;
    scanf("%d",&n);
    int a[100];
    int b[100];
    for ( int i = 0 ; i < n ; i++){
        scanf("%d%d",&a[i],&b[i]);
    }
    for ( int i = 0 ; i < n ; i++){
        if (a[i] > b[i]){
            int tmp = a[i];
            a[i] = b[i];
            b[i] = tmp ;
        }
        for ( int j = a[i] ; j <= b[i] ; j++){
            if (check(i)){
                printf("%d ",i);
            }
        }
    }
    return 0;
}