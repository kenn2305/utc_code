#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    char sdt[100];
    gets(sdt);
    int n = strlen(sdt);
    for ( int i = 0 ; i < n ; i++){
        if (sdt[i] > '9' && sdt[i] <'0'){
            printf("NO\n");
            return 0 ;
        }
    }
    if ( n != 10){
        printf("NO\n");
        return 0;
    } else {
        if (sdt[0] != '0' || sdt[9] == '4' || sdt[9] =='7'){
            printf("NO\n");
            return 0 ;
        }
    }
    printf("YES\n");
    return 0;
}