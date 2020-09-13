#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag;

    cin >> n;
    flag = 1;
    for(int i = 2; i <= n/ 2; i++){
        if(n % 2 == 0)
            flag = 0;
    }
    if(flag == 0)
        cout << n << " is not prime" << "\n";
    else
        cout << n << " is prime" << "\n";

    return 0;
}
