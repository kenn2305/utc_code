#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Point{
    float x ;
    float y ;
};
typedef struct Point point;
point nhap(){
    point x ;
    printf("Nhap hoanh do : ");
    scanf("%f",&x.x);
    printf("Nhap tung do : ");
    scanf("%f",&x.y);
    return x;
}
void in(int n , point a[]){
    for ( int i = 0 ; i < n ; i++){
        printf("Diem thu %d: %.2f %.2f\n",i+1,a[i].x,a[i].y);
    }
}
void sapxepday(int n , point a[]){
    for ( int i = 0 ; i < n ; i++){
        for ( int j =  0;  j < i ; j++){
            if (sqrt(pow(a[i].x,2)+ pow(a[i].y,2)) < sqrt(pow(a[j].x,2)+ pow(a[j].y,2))){
                point tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    printf("Day diem sau khi sap xep : \n");
    in(n,a);
}
void tongkhoangcach(int n , point a[]){
    float sum = 0 ;
    for ( int i = 0 ; i < n ; i++){
        sum+=sqrt(pow(a[i].x,2)+ pow(a[i].y,2));
    }
    printf("Tong khoang cach tu cach diem den goc toan do la %.2f :\n",sum);
}
void gangoc(int n , point a[]){
    float min = 1e9;
    for ( int i = 0 ; i < n ; i++){
        if ( min > sqrt(pow(a[i].x,2)+ pow(a[i].y,2))){
            min = sqrt(pow(a[i].x,2)+ pow(a[i].y,2));
        }
    }
    for ( int i = 0 ; i < n ; i++){
        if (sqrt(pow(a[i].x,2)+ pow(a[i].y,2)) == min){
            printf("Diem cach goc toa do gan nhat la : %.2f %.2f\n",a[i].x ,a[i].y);
        }
    }
}
void dientich(int n , point a[]){
    float max = -1e9;
    for ( int i = 0 ; i < n ; i++){
        if ( max < sqrt(pow(a[i].x,2)+ pow(a[i].y,2))){
            max = sqrt(pow(a[i].x,2)+ pow(a[i].y,2));
        }
    }
    float dientich = 2.0*3.14*pow(max,2);
    printf("Dien tich hinh tron nho nhat chua cac diem la : %.2f\n",dientich);
}
int main(){
    int n ;
    scanf("%d",&n);
    point a[n];
    for ( int i = 0 ; i < n ; i++){
        printf("Nhap diem thu %d :\n",i+1);
        a[i]=nhap();
    }
    sapxepday(n,a);
    tongkhoangcach(n,a);
    gangoc(n,a);
    dientich(n,a);
    return 0;
}