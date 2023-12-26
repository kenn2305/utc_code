#include <stdio.h>
#include <stdlib.h>
typedef long long ll;
int binasearch(int n,ll x , ll a[]){
    int l = 0 ;
    int r = (n-1);
    while (l<=r){
        int mid = (l+r)/2;
        if (a[mid] == x){
            return 1;
        } else if (a[mid] > x){
            r = mid -1 ;
        } else {
            l = mid + 1;
        }
    }
    return 0;
}
int cmp(const void *a , const void *b){
    return (ll*)a < (ll*)b ;
}
int main(){
    int n ;
    ll x ;
    scanf("%d %lld",&n,&x);
    ll a[n];
    for ( int i = 0 ; i < n ; i++){
        scanf("%lld",&a[i]);
    }
    qsort(a,n,sizeof (ll),cmp);
    for ( int i = 0 ; i < n ; i++){
        ll q = x - a[i];
        if(binasearch(n,q,a)){
            if (a[i] > q){
                ll tmp = a[i];
                a[i] = q ;
                q = a[i];

            }
            printf("%lld %lld", a[i],q);
            break;
        }
    }
    return 0;
}