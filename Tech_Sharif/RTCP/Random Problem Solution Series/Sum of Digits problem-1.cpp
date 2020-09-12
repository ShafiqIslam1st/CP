#include<bits/stdc++.h>
using namespace std;

int main()
{
//    ios_base :: sync_with_stdio(false);
//    cin.tie(NULL);

    int sum, n, rem;

    //while(1){
        cin >> n;
        sum = 0;
        while(n){
            rem = n % 10;
            if(!(rem & 1))
                sum += rem;
            n /= 10;
        }
        cout << sum << "\n";
    //}
    return 0;
}
