#include<stdio.h>

int main()
{
    int n, t, sum;

    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        sum =0;
        while(n!=0){
            n = n/5;
            sum+=n;
        }
        printf("%d\n", sum);
    }
    return 0;
}
