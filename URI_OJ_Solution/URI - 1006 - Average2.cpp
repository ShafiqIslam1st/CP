#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    double a, b, c, result;

    cin >> a >> b >> c;
    result = ((a * 2) + (b * 3) + (c * 5) ) / 10.0;
    cout << "MEDIA = " << fixed << setprecision(1) << result << "\n";

    return 0;
}
