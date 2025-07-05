#include <stdio.h>

int a[105][105], n;

int bfs(int u, int v, int d) {
    int q[105], vis[105] = {0}, f = 0, r = 0;
    q[r++] = u;
    vis[u] = 1;

    while (f < r) {
        int x = q[f++];
        for (int i = 1; i <= n; i++) {
            if (!vis[i] && a[x][i] >= d) {
                vis[i] = 1;
                q[r++] = i;
                if (i == v) return 1; // Found path
            }
        }
    }
    return 0; // Path not found
}

int main() {
    int m, q;
    scanf("%d%d%d", &n, &m, &q);  // Include 'n' as well since it’s needed globally
    for (int i = 0; i < m; i++) {
        int u, v, c;
        scanf("%d%d%d", &u, &v, &c);
        a[u][v] = a[v][u] = c;
    }
    while (q--) {
        int u, v, d;
        scanf("%d%d%d", &u, &v, &d);
        puts(bfs(u, v, d) ? "YES" : "NO");
    }
    return 0;
}
