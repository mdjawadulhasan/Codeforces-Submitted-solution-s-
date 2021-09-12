#include <iostream>
using namespace std;
bool isPrime(int num)
{
    bool flag = true;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    long long int n;
    cin >> n;
    int val1 = n / 2;
    int val2 = n - val1;

    bool c1, c2;

    while (true)
    {
        c1 = isPrime(val1);
        c2 = isPrime(val2);

        if (c1 != true && c2 != true)
        {
            break;
        }

        if (val1==1)
        {
        val1=val1+1;
        val2=val2-1;  
        }
        else
        {
        val1=val1-1;
        val2=val2+1;
        }
    }

    cout<<val1<<" "<<val2<<endl;
}