#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

#define vll vector<ll>
#define pll pair<ll, ll>
#define endl '\n'
#define ahmed                                                       \
    ios_base::sync_with_stdio(false);                               \
    cin.tie(NULL);                                                  \
    cout.tie(NULL);

const int MOD = 1000000007;
const ll INF = 1e18;

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(v) (int)(v).size()

#define pb push_back
#define fi first
#define se second
#define YES cout << "YES\n"
#define NO cout << "NO\n"

#define f(i, b) for (ll i = 0LL; i < (ll)(b); ++i)
#define fa(i, a, b) for (ll i = (a); i < (ll)(b); ++i)
#define rf(i, a, b) for (ll i = (a); i >= (ll)(b); --i)
#define each(a, x) for (auto &a : x)

template <typename T> istream &operator>>(istream &in, vector<T> &v) {
    for (auto &x : v) in >> x;
    return in;
}

template <typename T> ostream &operator<<(ostream &out, const vector<T> &v) {
    for (int i = 0; i < v.size(); ++i) {
        out << v[i] << (i == v.size() - 1 ? "" : " ");
    }
    return out;
}

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b) {
    return a * (b / gcd(a, b));
}
ll modpow(ll a, ll e, ll mod = MOD) {
    ll r = 1;
    while (e) {
        if (e & 1) r = (r * a) % mod;
        a = (a * a) % mod;
        e >>= 1;
    }
    return r;
}

void solve() {
  ll n, k = 0;
  string s;
  cin >> n >> s;
  vector<ll> v;
  set<ll> v1;
  
  for (ll i = 0; i < (ll)s.size(); i++) {
    if (s[i] == '1') {
      v.push_back(i+1);
    }
    else if (s[i] == '2') {
      k++;
      if (v.size() == 0) {
        v1.insert(i+1);
      }
      else {
        v1.insert(v[(ll)v.size()-1]);
        v.pop_back();
      }
    }
    else if (s[i] == '3') {
      k++;
      v1.insert(i+1);
    }
  }
  cout << (ll)s.size() - k << endl;
  for (ll i = 1; i < n+1; i++) {
    if (!v1.contains(i)) cout << i << " ";
  }
  cout << endl;
}

int main() {
    ahmed
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
        // cout << '\n';
    }
    return 0;
}
