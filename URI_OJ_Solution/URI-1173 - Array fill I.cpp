#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;

    cin >> x;
    for(int i = 0; i<10; i++){
            printf("N[%d] = %d\n", i, x);
            x += x;
    }

    return 0;
}

