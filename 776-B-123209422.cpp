//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int MX = 1e5+123;

bool is_prime[MX];
vector<int> prime;

void primeGen ( int n )
{
    n += 100;
    for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;

    int sq = sqrt ( n );
    for ( int i = 3; i <= sq; i += 2 ) {
        if ( is_prime[i] == 1 ) {
            for ( int j = i*i; j <= n; j += ( i + i ) ) {
                is_prime[j] = 0;
            }
        }
    }

    is_prime[2] = 1;
    prime.push_back (2);

    for ( int i = 3; i <= n; i += 2 ) {
        if ( is_prime[i] == 1 ) prime.push_back ( i );
    }
}

int main()
{
    optimize();

    int lim = 1e5;
    primeGen ( lim );

    int n;
    cin >> n;
    ( n == 1 || n == 2 ) ? cout << 1 << endl : cout << 2 << endl;

    for ( int i = 2; i <= n+1; i++ ) {
        if ( is_prime[i] == 1 ) cout << 1 << " ";
        else cout << 2 << " ";
    }

    return 0;
}