#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int cmp(const void *a , const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    if (*x < *y){
        return 0;
    }
    return 1;
}
int main(){
    int n ;
    scanf("%d" , &n);
    int a[10000];
    int check[100000];
    for ( int i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    for ( int i = 0 ; i < n ; i++){
        check[a[i]] = i+1 ;
    }
    qsort(a,n,sizeof(int),cmp);
    for ( int i = 0 ; i < n ; i++){
        printf("%d " , check[a[i]]);
    }
    return 0;
}