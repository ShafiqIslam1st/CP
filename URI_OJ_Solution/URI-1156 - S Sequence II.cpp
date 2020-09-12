#include<bits/stdc++.h>
using namespace std;

int main()
{
   double sum = 1.0;

    for(int i = 3, j = 2; i <= 39; i = i + 2, j = j * 2){
        sum += ((i * 1.0) / (j * 1.0));
    }

    cout << fixed<< setprecision(2) << sum << "\n";

    return 0;
}


