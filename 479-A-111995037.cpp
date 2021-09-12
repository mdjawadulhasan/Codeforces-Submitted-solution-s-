#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v;
    long long int sum1, sum2, sum3, sum4, sum5, sum6,m=0;
    long long int a, b, c;
    cin>>a>>b>>c;
    sum1 = a + b * c;
    sum2 = a * (b + c);
    sum3 = a * b * c;
    sum4 = (a + b) * c;
    sum5 = (a * b) + c;
    sum6 = a + b + c;
    v.push_back(sum1);
    v.push_back(sum2);
    v.push_back(sum3);
    v.push_back(sum4);
    v.push_back(sum5);
    v.push_back(sum6);
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > m)
        {
            m = v[i];
        }
    }

    cout<<m<<endl;
}