#include<bits/stdc++.h>
using namespace std;

int main()
{
    int f1 = 0, f2 = 1, temp;

    cout << f1 << " " << f2 << " ";
    for(int i = 3; i <= 1000; i++){
        temp = f2;
        f2 = f1 + f2;
        f1 = temp;
        cout << f2 << " ";
    }
    return 0;
}
