#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, par[5], impar[5];

   int i, k = 0,  j = 0;
    for(i = 0; i<15; i++){
        cin >> n;
        if(n & 1){
            impar[k] = n;
            k++;
            if(k == 5){
                for(int l = 0; l<k; l++)
                    printf("impar[%d] = %d\n", l, impar[l]);
              k = 0;
            }
        }
        else{
            par[j] = n;
            j++;
            if(j == 5){
                for(int m = 0; m<j; m++)
                    printf("par[%d] = %d\n", m, par[m]);
                j = 0;
            }
        }
    }

    for(int i = 0; i<k ; i++ )
         printf("impar[%d] = %d\n", i, impar[i]);

    for(int i = 0; i<j ; i++ )
         printf("par[%d] = %d\n", i, par[i]);

    return 0;
}

