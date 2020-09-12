#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 1; i<=9; i += 2){
                 int   count = 6 + i;
        for(int j = 1; j <= 3; j++){
            cout << "I=" << i << " " << "J=" << count-- << "\n";
        }
    }

    return 0;
}



