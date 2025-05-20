/*
#include <stdio.h>
#include <limits.h>

int maxTreasure(int n, int k, int A[]) {
    int max_sum = INT_MIN;
    int curr_sum = 0;
    int start = 0;

    for (int end = 0; end < n; end++) {
        curr_sum += A[end];

        if (end - start + 1 > k) {
            curr_sum -= A[start];
            start++;
        }

        if (end - start + 1 == k) {
            if (curr_sum > max_sum)
                max_sum = curr_sum;
        }
    }

    return max_sum;
}

int main() {
    int n = 5, k = 3;
    int A[] = {1, 2, -3, 4, 5};

    int result = maxTreasure(n, k, A);
    printf("Maximum treasure: %d\n", result);

    return 0;
}
*/

#include <stdio.h>
#define MIN -1000000000

int main(){
    int n,k,sum = 0,maxSum=MIN,start=0;
    scanf("%d%d",&n,&k);
    int A[n];

    for (int i=0;i<n;i++)

    scanf("%d",&A[i]);

    for (int end = 0;end <n;end++){
        sum+=A[end];
        if(end>=k)sum-=A[start++];
        if(sum>maxSum)maxSum=sum;

    }
    printf("%d\n",maxSum);
    return 0;
}