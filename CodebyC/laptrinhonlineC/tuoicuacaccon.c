#include <stdio.h>
int main(){
    int a , b ;
    scanf("%d%d" , &a, &b);
    if ( a > b){
        int tmp = a ;
        a = b ;
        b =tmp ;
    }
    int c =  b-a ;
    printf("%d",b+c);
    return 0;
}