#include <stdio.h>
#include <stdlib.h>
typedef long long ll ;
ll Fib_Num(int n){
    if ( n <= 1 ){
        return n ;
    } else {
        return Fib_Num(n-1)+ Fib_Num(n-2);
    }
}
int main(){
    int n ;
    scanf("%d" , &n);
    int a[1000];
    for ( int i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    for ( int i = 0 ; i < n ; i++){
        printf("Fib(%d) = %lld \n" ,a[i] , Fib_Num(a[i]));
    }
    return 0;
}