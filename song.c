/*
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
*/

#include <stdio.h>

int main(){

    int n,s;
    scanf("%d %d",&n,&s);
    int bus_capacity = 45;

    //calculate total bus nedded
    int total_buses =(n+bus_capacity-1)/bus_capacity;

    //calculate the bus number of the s-th passenger
    int your_bus =(s-1)/bus_capacity +1;

    //calculate how many passengers are on the last bus
    int last_bus_passengers =n%  bus_capacity;
    if (last_bus_passengers == 0)
       last_bus_passengers = bus_capacity;

    //calculate tempty seats on the last bus
    int empty_seats = bus_capacity-last_bus_passengers;

    //output the results
    printf("%d %d\n",total_buses,your_bus,empty_seats);

    return 0;


}
