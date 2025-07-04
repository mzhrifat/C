#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n], i, mx = 0, mn = 1e9, maxc = 0, minc = 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > mx) mx = a[i];
        if (a[i] < mn) mn = a[i];
    }

    for (i = 0; i < n; i++) {
        if (a[i] == mx) maxc++;
        if (a[i] == mn) minc++;
    }

    if (mx == mn)
        printf("0 %lld\n", 1ll * n * (n - 1) / 2);
    else
        printf("%d %lld\n", mx - mn, 1ll * maxc * minc);

    return 0;
}
