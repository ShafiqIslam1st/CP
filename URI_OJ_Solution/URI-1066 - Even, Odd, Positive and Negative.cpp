#include<bits/stdc++.h>
using namespace std;

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int even, odd, pos, neg;

    even = odd = pos = neg = 0;
    int n, t = 5;

    while(t--){
        cin >> n;
        if(n & 1)
            odd++;
        else
            even++;
        if(n > 0)
            pos++;
        else if( n < 0)
            neg++;
    }
    cout <<even <<  " valor(es) par(es)"  << "\n";
    cout << odd << " valor(es) impar(es)" << "\n";
    cout << pos << " valor(es) positivo(s)" << "\n";
    cout << neg << " valor(es) negativo(s)" << "\n";

    return 0;
}

