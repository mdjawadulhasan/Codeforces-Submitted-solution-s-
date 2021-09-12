#include<bits\stdc++.h>
using namespace std;

int main()
{
    double n,m,a;
    cin>>n>>m>>a;
    double p=ceil(n/a);
    double q=ceil(m/a);
    printf("%0.0lf",p*q);
    return 0;

}