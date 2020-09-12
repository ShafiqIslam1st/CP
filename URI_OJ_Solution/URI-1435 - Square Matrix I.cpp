#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(1){
        cin >> n;
        if(n == 0)
            break;
        int ara[n][n];
        int hn , a, b;

         hn = n / 2;
         if(n % 2 == 1)
            hn++;
         a = 0;
         b = n - 1;
         for(int l = 1; l <= hn ; l++){
        for(int i = a; i<= b; i++){
            for(int j = a; j<= b; j++){
                ara[i][j] = l;
            }
        }
        a++;
        b--;
         }

        for(int i = 0; i<n; i++){
            for(int j =  0; j<n; j++){
                if(j == 0)
                    printf("%3d", ara[i][j]);
                else
                printf(" %3d", ara[i][j]);
            }
        cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}

