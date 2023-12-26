#include <stdio.h>
#include <limits.h>
int main(){
    int n ;
    scanf("%d",&n);
    int arr[n];
    int max = INT_MIN;
    int min = INT_MAX;
    int res1 = 0;
    int res2 = 0;
    for ( int i = 0 ; i < n ; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max) {
            max = arr[i];
            res1 = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            res2 = i ;
        }
    }
    printf("%d %d",res2 ,res1);
    return 0;
}