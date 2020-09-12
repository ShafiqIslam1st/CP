#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 1, j = 60;  ;i+= 3, j -= 5){
        cout << "I=" << i << " " << "J=" << j << "\n";
        if(j == 0)
            break;
    }

    return 0;
}
