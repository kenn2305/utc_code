#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct oto {
    int BKS;
    float TT;
    char Cty;
};

typedef struct oto OTO;

void nhap(OTO *a) {
    scanf("%d", &a->BKS);
    scanf("%f", &a->TT);
    scanf(" %c", &a->Cty);  // Thêm dấu cách trước %c để bỏ qua ký tự trắng, newlines, và tabs
}

void chia3(int n, OTO a[]) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i].Cty == 'B') {
            if (a[i].BKS % 3 == 0) {
                cnt++;
            }
        }
    }
    printf("%d\n", cnt);
}

void ttnn(int n, OTO a[]) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].TT > a[j].TT) {
                OTO tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        printf("%d\n", a[i].BKS);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    OTO a[n];
    for (int i = 0; i < n; i++) {
        nhap(&a[i]);
    }
    chia3(n, a);
    ttnn(n, a);
    return 0;
}
