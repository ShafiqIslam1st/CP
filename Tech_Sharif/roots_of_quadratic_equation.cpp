#include<bits/stdc++.h>
using namespace std;

void find_roots(int a, int b, int c)
{
    if(a == 0){
        cout << "invalid" << "\n";
        return ;
    }
    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));

    if(d >= 0){
        cout << (double) (-b + sqrt_val) / 2 * a << "\n";
        cout << (double) (-b - sqrt_val) / 2 * a << "\n";
    }
    else{
        cout << -(double) b / 2 * a << " + i " << sqrt_val << "\n";
        cout << -(double) b / 2 * a << " - i " << sqrt_val << "\n";
    }
}
int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    find_roots(a, b, c);

    return 0;
}
