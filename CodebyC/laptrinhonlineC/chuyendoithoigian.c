#include <stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int h = n / 3600 ;
    int p = (n%3600)/60;
    int g = (n%3600)%60;
    printf("%d:%d:%d",h,p,g);
    return 0;
}