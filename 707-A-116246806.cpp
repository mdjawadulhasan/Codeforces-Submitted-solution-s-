//In the name of ALLAH
//MD.JAWADUL HASAN
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
#define Bismillah int main()
#define Alhamdulillah return 0

#define mem(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define sqr(a) ((a) * (a))

ll power(ll base, ll exp)
{
    if (exp == 0)
    {
        return 1;
    }
    ll half = power(base, exp / 2);
    if (exp % 2 == 0)
    {
        return (half * half);
    }
    else
    {
        return (half * half * base);
    }
}

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

template <typename F, typename S>
ostream &operator<<(ostream &os, const pair<F, S> &p)
{
    return os << "(" << p.first << ", " << p.second << ")";
}

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    os << "{";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "}";
}

template <typename T>
ostream &operator<<(ostream &os, const set<T> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}

template <typename T>
ostream &operator<<(ostream &os, const multiset<T> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}

template <typename F, typename S>
ostream &operator<<(ostream &os, const map<F, S> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << it->first << " = " << it->second;
    }
    return os << "]";
}

#define dbg(args...)            \
    do                          \
    {                           \
        cerr << #args << " : "; \
        faltu(args);            \
    } while (0)

void faltu()
{
    cerr << endl;
}

template <typename T>
void faltu(T a[], int n)
{
    for (int i = 0; i < n; ++i)
        cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename... hello>
void faltu(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}

int countDigit(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}
//************************************************************//

Bismillah
{
    optimize();
    ll n, m;
    cin >> n >> m;

    char ar[n][m];
    ll flag = 0;

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> ar[i][j];
        }
    }

    // dbg(ar[0][0]);
    ll bk = -1;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {

            if (ar[i][j] == 'W' || ar[i][j] == 'G' || ar[i][j] == 'B')
            {
                flag = 1;
            }
            else
            {
                flag = -1;

            
                bk = 1;
                break;
            }
        }
        if (bk == 1)
            break;
    }

    if (flag == 1)
    {
        cout << "#Black&White" << endl;
    }
    else if (flag == -1)
    {
        cout << "#Color" << endl;
    }
}