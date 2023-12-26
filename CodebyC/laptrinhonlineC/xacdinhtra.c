#include <stdlib.h>
#include <stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int a[1000] ; int cnt = 0 ;
    for ( int i = 0 ; i < 5 ; i++){
        scanf("%d",&a[i]);
    }
    for ( int i = 0 ; i < 5 ; i++){
        if (n == a[i]){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}