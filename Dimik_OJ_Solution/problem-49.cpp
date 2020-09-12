#include<stdio.h>
#include<math.h>
#define size 1000000
#define size2 79000
char ch[size];
int r_prime(int ara1[], int n)
{
    int i, j =0;
    for(i=2; i<=n; i++){
        if(ch[i]!=0){
            ara1[j] = i;
            j++;
        }
    }
    return j;
}
void sieve()
{
    int i, j, root;

    for(i=2; i<size; i++)
        ch[i]=1;

    root = sqrt(size);
    for(i=2; i<=root; i++){
        if(ch[i]==1){
            for(j=2; j*i<=size; j++){
                ch[i*j] = 0;
            }
        }
    }
}
int main()
{
    sieve();
    int i, t, ara2[size2], j, ck, root;
    long long int n;
    scanf("%d", &t);
 while(t--){

    scanf("%lld", &n);
    root = sqrt(n);
    j = r_prime(ara2, root);
    ck =1;
    for(i=0;i<j; i++){
        if(n%ara2[i]==0){
            ck = 0;
            break;
        }

    }
    if(ck==1)
        printf("%lld is a prime\n", n);
    else
        printf("%lld is not a prime\n", n);
}
    return 0;
}
