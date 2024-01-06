#include <iostream>
using namespace std;
int main(){
    int n ; cin >> n ;
    if (n == 61){
        cout << "Brasilia" << endl ;
    } else if (n == 71){
        cout << "Salvador";
    } else if (n==11){
        cout << "Sao Paulo";
    } else if (n==21){
        cout << "Rio de Janeiro" ;
    }else if (n==32){
        cout << "Juiz de Fora";
    }else if(n==19){
        cout << "Campinas";
    } else if(n==27){
        cout << "Vitoria";
    }else if (n==31){
        cout << "Belo Horizonte" ;
    }else{
        cout << "DDD nao cadastrado" ;
    }
    return 0;
}