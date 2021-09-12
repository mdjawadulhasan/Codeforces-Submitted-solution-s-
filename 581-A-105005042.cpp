#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int count1 = 0, count2 = 0;

    while (true)
    {
        if (a <= 0 && b <=0)
        {
            break;
        }
        else if (a == 0)
        {
           if(b<2)
           {
               break;
           } 
            
            b = b - 2;
            count2++;
            

        }
        else if (b == 0)
        {
             if(a<2)
           {
               break;
           }
            a = a - 2;
            count2++;
        }
        else
        {
            a--;
            b--;
            count1++;
        }
    }

    cout << count1 << " " << count2 << endl;
}