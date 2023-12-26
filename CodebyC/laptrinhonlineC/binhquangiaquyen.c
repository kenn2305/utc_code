#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void res(double a , double b , double c){
    printf("%.1lf \n" , (a*2+b*3+c*5)/10);
}
int main(){
    int n ;
    scanf("%d" , &n);
    double a[100];
    double b[100];
    double c[100];
    for ( int i = 0 ; i < n ; i++){
        scanf("%lf%lf%lf",&a[i],&b[i],&c[i]);
    }
    for ( int i = 0 ; i < n ; i++){
        res(a[i],b[i],c[i]);
    }
    return 0;
}