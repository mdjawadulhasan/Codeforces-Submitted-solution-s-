#include<iostream>
using namespace std;
int main()
{
int n1,n2,sum=0,sum2=0,max=0;
int a;
cin>>a;

for(int i=0;i<a;i++)
{
    cin>>n1;
    cin>>n2;

    sum=sum2+n2;
    sum2=sum-n1;

    if(sum2>max)
    {
        max=sum2;
    }
}
cout<<max<<endl;

}