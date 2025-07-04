#include <stdio.h>
#define max(a,b) ((a) > (b) ? (a) : (b))
#define INF 1000000000000000000LL

int main() {
    int N;
    long long C;
    scanf("%d %lld", &N, &C);

    long long W[N];
    for (int i = 0; i < N; i++) {
        scanf("%lld", &W[i]);
    }

    long long dp0 = 0, dp1 = 1, w0 = 0, w1 = W[0] <= C ? W[0] : INF;

    for (int i = 1; i < N; i++) {
        long long ndp0 = max(dp0, dp1);
        long long nw0 = w0 < w1 ? w0 : w1;

        long long ndp1 = -1e9, nw1 = INF;
        if (w0 + W[i] <= C) {
            ndp1 = dp0 + 1;
            nw1 = w0 + W[i];
        }

        dp0 = ndp0;
        dp1 = ndp1;
        w0 = nw0;
        w1 = nw1;
    }

    printf("%lld\n", dp0 > dp1 ? dp0 : dp1);
    return 0;
}
