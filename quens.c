#include <stdio.h>
#include <stdbool.h>
int N,total;
bool cursed[12][12];
bool col[12],diag1[24],diag2[24];
void solve(int row){
    if (row==N){
        total ++;
        return;
    }

    for (int c=0;c<N;c++){
        if cursed[row][c] || col[c] ||diag1[row+c]|| diag2[row-c+N-1]
        continue;;
        col[c]=diag1[row+c]=diag2[row-c+N-1]=true;
        solve(row+1);col[c]=diag1[row+c]=diag2[row+c]=diag2[row-c+N-1]=false;
    }
    int main(){
        int M;
        SCANF("%d %d",&N,&M);
        for (int i=0;i<N;i++)
        for (int j=0;j<N;j++)
    cursed[i][j]=false;

    for (int i=0;i<m;i++){
        int r,c;
        scanf("%d %d",&r,&c);
        cursed[r][c]=true;
        solve(0);
        printf("%d\n",total);
        return 0;
    }
    }
}
