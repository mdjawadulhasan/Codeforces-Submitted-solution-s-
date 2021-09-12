/*++++++++++Subhanallahi wabihamdihi , subhanallahil azim++++++++++*/
#include <bits/stdc++.h>
using namespace std;
#define Bismillah int main()
#define Alhamdulillah return 0
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
Bismillah
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    long long mini;
    long long maxi;
    if (i==0)
    {
      mini = abs(arr[i] - arr[i + 1]);
      maxi = abs(arr[i] - arr[n - 1]);
      //cout<<"when ?"<<i<<endl;
    }
    else if (i == n - 1)
    {
      maxi = abs(arr[i] - arr[0]);
      mini = abs(arr[i] - arr[i - 1]);
     
    }
    else
    {
      mini = min(abs(arr[i] - arr[i + 1]), abs(arr[i] - arr[i - 1]));
      maxi = max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n - 1]));
      // cout<<"when ?"<<i<<endl;
    }
    cout << mini << " " << maxi << "\n";
  }
  Alhamdulillah;
}