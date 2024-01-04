#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 2; i++) {
        // Sắp xếp tìm ba phần tử lớn nhất
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < n - 1 - j; k++) {
                if (a[k] > a[k + 1]) {
                    swap(&a[k], &a[k + 1]);
                }
            }
        }

        // In ba phần tử lớn nhất
        printf("%d %d %d\n", a[n - 1], a[n - 2], a[n - 3]);

        // Loại bỏ phần tử lớn nhất
        n--;
    }

    return 0;
}
