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
    ll n, s;
    cin >> n >> s;
    vector<ll> a(s+1);
    for (int i = 1; i <= n; i++) {
        ll x, t;
        cin >> x >> t;
        a[x] = max(a[x], t);
    }
/*     for (int i = 0; i <= s; i++) {
        cout << a[i] << " ";
    } */
    ll elapsedTime = 0;
    ll i = s;
    while (i > 0) {
        ll extraTime = 0;
        if (a[i] != 0) {
            if (a[i] > elapsedTime) extraTime = a[i] - elapsedTime;
        }
        // cout << "Floor: " << i << " " << "Extra time: " << extraTime << "\n";
        elapsedTime += extraTime;
        elapsedTime++;
        i--;
    }
    cout << elapsedTime << endl;
}

int main() {
    ahmed
    ll t = 1;
    // cin >> t;
    while (t--) {
        solve();
        // cout << '\n';
    }
    return 0;
}
