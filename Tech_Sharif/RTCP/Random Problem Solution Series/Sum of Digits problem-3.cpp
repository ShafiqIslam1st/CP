#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int sum, n, rem;
    string str;
    //while(1){
        cin >> str;
        sum = 0;
        for (int i = 0; i < str.length(); i++){
            if(i & 1)
                sum -= str[i] - '0';
            else
                sum += str[i] - '0';
        }
        cout << sum << "\n";
    //}
    return 0;
}

