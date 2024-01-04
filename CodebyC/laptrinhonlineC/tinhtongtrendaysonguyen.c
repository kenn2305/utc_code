#include <stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int a[n];
    for ( int i = 0 ; i < n ; i++){
        scanf("%d",&a[i]);
    }
    long long side = 0 ;
    long long sum = 0 ;
    for ( int i = 0 ; i < n ; i++){
        sum+=a[i];
        side+=sum;
    }
    printf("%lld",side);
    return 0;
}