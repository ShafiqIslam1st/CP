#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;

    while(scanf("%d", &n) != EOF){
    int r = n/2;
     int ara[n][n];
     int k = r;
    if(n & 1)
       k = r + 1;

    int j;
    for(int i = 1, c = n; i<=k; i++, c--){
        for( j = 1; j<=n; j++){
            if(i == j)
                   ara[i][j] = 1;
            else
                    ara[i][j] = 3;
        }
        ara[i][c] = 2;
    }
    if(n & 1)
        ara[k][k] = 2;
    for(int i = 1; i<=k; i++){
            for(int j =  1; j<=n; j++){
                if(j == 1)
                    printf("%d", ara[i][j]);
                else
                printf("%d", ara[i][j]);
            }
        cout << "\n";
        }

    for(int i = r; i >=1; i--){
        for(int j = n; j >=1; j--)
              if(j == n)
                    printf("%d", ara[i][j]);
                else
                printf("%d", ara[i][j]);
        cout << "\n";
    }
    }

    return 0;
}
