/*
#include <stdio.h>

int p[300005];

int f(int x){
    return p[x] == x ? x : (p[x] = f(p[x]));
}

int main(){
    int n, m, u, v, i, c = 0;
    scanf("%d%d", &n, &m);

    for(i = 1; i <= n; i++) p[i] = i;

    while(m--){
        scanf("%d%d", &u, &v);
        p[f(u)] = f(v);
    }

    for(i = 1; i <= n; i++)
        if(f(i) == i) c++;

    printf("%d\n", c - 1);
    return 0;
}
 */
 //an outstanding problem

 #include <stdio.h>
char s[10000000];
long long l[100005], r[100005], len[100005];

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, c, q;
        scanf("%d%d%d", &n, &c, &q);
        scanf("%s", s);

        long long cur = n;
        for (int i = 0; i < c; i++) {
            int x, y;
            scanf("%d%d", &x, &y);
            l[i] = cur;
            r[i] = cur + (y - x);
            len[i] = x - 1;
            for (int j = x - 1; j < y; j++) s[cur++] = s[j];
        }

        while (q--) {
            long long k;
            scanf("%lld", &k);
            k--;
            for (int i = c - 1; i >= 0; i--)
                if (k >= l[i] && k <= r[i]) k = len[i] + (k - l[i]);
            printf("%c\n", s[k]);
        }
    }
    return 0;
}
