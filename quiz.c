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
