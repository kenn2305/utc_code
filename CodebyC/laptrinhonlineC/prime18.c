#include <stdio.h>
int check(int a , int b , int c , int d){
    int cnt = 0  ;
    for ( int i = a ; i <= b ; i++){
        if ( i % c == 0 || i % d == 0){
            cnt++;
        }
    }
    return cnt ;
}
int main(){
    int t ;
    int a,b,c,d;

    scanf("%d",&t);
    while (t--){
        scanf("%d%d%d%d",&a,&b,&c,&d);
        printf("%d\n", check(a,b,c,d));
    }
    return 0;
}