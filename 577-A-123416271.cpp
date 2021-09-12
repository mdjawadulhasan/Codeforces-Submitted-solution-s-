//In the name of ALLAH
//MD.JAWADUL HASAN
/*                       ___     ___
                         # #     # #
                         # #     # #    
                         # #_____# #
                   __    # #_____  |
                   \ \   # #     # #    
                    \ \  # #     # #    
                     \_ _#_#     #_#    
                                          
 
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const double PI = acos(-1);
const double eps = 1e-10;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
#define Bismillah int main()
//#define Alhamdulillah return 0

#define mem(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define sqr(a) ((a) * (a))

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

//---------------------------------------------dbg--------------------
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
//---------------------------------------------------My Functions----------------------------------
ll countDigit(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

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

void CharCount(string s)
{
    multiset<char> st;
    set<char> sst;
    for (int i = 0; i < s.size(); i++)
    {
        st.insert(s[i]);
        sst.insert(s[i]);
    }
    cout << s << endl;
    for (set<char>::iterator it = sst.begin(); it != sst.end(); ++it)
    {
        char ch = char(*it);
        cout << ch << " : " << st.count(ch) << endl;
    }
}

int CanbePalindrome(string str)
{

    int count[256] = {0};
    for (int i = 0; str[i]; i++)
    {
        count[str[i]]++;
    }

    int odd = 0;
    for (int i = 0; i < 256; i++)
    {
        if (count[i] & 1)
            odd++;

        if (odd > 1)
            return false;
    }

    return true;
}

int Digits(int n)
{
    int largest = 0;
    int smallest = 9;

    while (n)
    {
        int r = n % 10;
        // Find the largest digit
        largest = max(r, largest);
        // Find the smallest digit
        smallest = min(r, smallest);
        n = n / 10;
    }
    //cout << largest << " " << smallest;
    return largest;
}
//************************************************************//

Bismillah
{

    optimize();
    int n, x;
    cin >> n >> x;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if(x%i==0)
        {
          //  dbg(x%i);
            if(x/i<=n)
            {
              //  dbg(x/i);
               // dbg(count);
                count++;
               // dbg(count);
            }
        }
    }
    cout<<count<<endl;
}