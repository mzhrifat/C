
#include <stdio.h>
#include <string.h>

#define MAX_N 10
#define MAX_ID_LEN 11
#define MAX_GENRE_LEN 11

int N, K;
char ids[MAX_N][MAX_ID_LEN];
char genres[MAX_N][MAX_GENRE_LEN];
int used[MAX_N];
int total = 0;

void backtrack(int length, char prev_genre[]) {
    if (length == K) {
        total++;
        return;
    }

    for (int i = 0; i < N; i++) {
        if (!used[i] && strcmp(prev_genre, genres[i]) != 0) {
            used[i] = 1;
            backtrack(length + 1, genres[i]);
            used[i] = 0;
        }
    }
}
int main() {
    scanf("%d %d", &N, &K);

    for (int i = 0; i < N; i++) {
        scanf("%s %s", ids[i], genres[i]);
    }

    backtrack(0, ""); // Start with no previous genre

    printf("%d\n", total);
    return 0;
}
