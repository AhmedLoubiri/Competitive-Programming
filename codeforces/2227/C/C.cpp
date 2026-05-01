#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

#define TIKITAKA ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

/* PRINTS */
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
template<typename T> T readInt() { T x; cin >> x; return x; }
#define read(type) readInt<type>()
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (ll i = 2; i * i <= a; i++) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
ll factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

ll nCk(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

/* clang-format on */

void solve()
{
  ll n;
  cin >> n;
  /* if (v[i] % 6 == 0 || v[i] % 2 == 0 || v[i] % 3 == 0)
    tmp = v[i]
    v.erase(v.begin() + i);
    v.insert(v.begin(), tmp);
    tle ;(

    => the goal is to separate the ones divisible only by 2 and the ones divisible only by 3 by the one divisible by neither
    lets denote 4 vectors:
    v1; those divisible by 6
    v2; those divisible by 2
    v3; those divisible by 3
    v4; those divisible by neither
  */
  vector<ll> v1, v2, v3, v4;
  for (ll i = 0; i < n; i++)
  {
    ll x;
    cin >> x;

    if (x % 6 == 0)
      v1.push_back(x);
    else if (x % 2 == 0)
      v2.push_back(x);
    else if (x % 3 == 0)
      v3.push_back(x);
    else
      v4.push_back(x);
  }

  for (ll x : v2)
    cout << x << " ";
  for (ll x : v4)
    cout << x << " ";
  for (ll x : v3)
    cout << x << " ";
  for (ll x : v1)
    cout << x << " ";

  cout << "\n";
}

/* Main()  function */
int main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
#endif

  TIKITAKA

  ll t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
/* Main() Ends Here */
