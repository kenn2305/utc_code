#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int first;
    double second;
} Pair;

int cmp(const void* a, const void* b) {
    return ((Pair*)a)->second < ((Pair*)b)->second ? -1 : 1;
}

int main() {
    int n;
    scanf("%d", &n);

    Pair* a = (Pair*)malloc(n * sizeof(Pair));

    for (int i = 0; i < n; i++) {
        scanf("%d %lf", &a[i].first, &a[i].second);
    }

    qsort(a, n, sizeof(Pair), cmp);

    if (a[n - 1].second < 8) {
        printf("Diem toi thieu khong dat\n");
    } else {
        printf("%d\n", a[n - 1].first);
    }

    free(a);

    return 0;
}
