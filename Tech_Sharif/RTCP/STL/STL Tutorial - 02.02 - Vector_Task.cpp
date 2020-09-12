#include<bits/stdc++.h>
using namespace std;
///আগের ভিডিও এর প্রতিটি ফাংশন দিয়ে চেষ্টা করেছি
vector <int> input()
{
    vector <int> data;
    int n, d;

    cin >> n;
    while(n--){
        cin >> d;
        data.push_back(d);
    }
    return data;
}
///solution :01
//vector <int> reverse(vector <int> data)
//{
//    int ln = data.size();
//    int n;
//    for(int i = 0; i<ln/2; i++){
//        n = data[i];
//        data[i] = data[ln - i - 1];
//        data[ln - i - 1] = n;
//    }
//    return data;
//}
///solution :02
//vector <int> reverse(vector <int> data)
//{
//    int ln = data.size();
//    vector <int> rData(ln);
//    for(int i = 0, j = ln - 1;  j >= 0; j--, i++)
//        rData[i] = data[j];
//
//    return rData;
//}
///solution :03
//vector <int> reverse(vector <int> data)
//{
//    int ln = data.size();
//    vector <int> rData;
//
//   for(int i = ln - 1; i>= 0; i--)
//    rData.insert(rData.end(), data[i]);
//
//    return rData;
//}
///solution :04
vector <int> reverse(vector <int> data)
{
    int ln = data.size();
    vector <int> rData;

   for(int i =0; i<ln; i++)
    rData.insert(rData.begin(), data[i]);

    return rData;
}
int main()
{
    vector <int> data;
    data = input();
    data = reverse(data);

    for(int i: data)
        cout << i << " ";
    cout << "\n";

    return 0;
}
