#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct SV {
    char hoten[100];
    char quequan[100];
    char truong;
    char sbd[100];
    float diemthi;
};

typedef struct SV SV;

SV nhap() {
    SV x;
    printf("Nhap ho va ten sinh vien: ");
    fflush(stdin);
    gets(x.hoten);
    printf("Nhap que quan sinh vien: ");
    fflush(stdin);
    gets(x.quequan);
    printf("Nhap truong: ");
    fflush(stdin);
    scanf(" %c", &x.truong); // Note the space before %c
    printf("Nhap so bao danh: ");
    fflush(stdin);
    gets(x.sbd);
    printf("Nhap diem: ");
    scanf("%f", &x.diemthi);
    return x;
}

void in(SV a) {
    printf("Ho va ten: %s\n", a.hoten);
    printf("Que quan: %s\n", a.quequan);
    printf("Truong: %c\n", a.truong);
    printf("So bao danh: %s\n", a.sbd);
    printf("Diem: %.2f\n", a.diemthi);
}

void sapxep(int n, SV a[]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i].diemthi < a[j].diemthi) {
                SV tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        in(a[i]);
    }
}

int main() {
    printf("Nhap vao so luong sinh vien: ");
    int n;
    scanf("%d", &n);

    SV a[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap sinh vien thu %d:\n", i + 1);
        a[i] = nhap();
    }

    printf("DANH SACH SINH VIEN SAU KHI SAP XEP:\n");
    sapxep(n, a);

    return 0;
}
