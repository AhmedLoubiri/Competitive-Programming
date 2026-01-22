#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

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
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;


/* clang-format on */
int repetitions(string s) {
    int n = s.size();
    vector<int> pi(n, 0);

    for (int i = 1; i < n; i++) {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j]) j = pi[j - 1];
        if (s[i] == s[j]) j++;
        pi[i] = j;
    }

    int len = n - pi[n - 1];
    if (n % len == 0)
        return n / len;
    return 1;
}

bool invalid(ll x){
	string s = to_string(x);
	ll length = s.size(), i=0, j=1, numbers=0;
    /* while (j<=length && s[i] == s[j]) {
        i++;
        j++;
        numbers++;
    } */
    ll times = repetitions(s), k = 1;
    numbers = length / times;
    string sub = s.substr(0, numbers);
    if (numbers == length) return false;
    /* string built = "";
    cf(k,1,times){
        built += sub;
    }
    if (built == s) return true; */
    while (!s.empty() && k<=times) {
        if (s.substr(0, numbers) != sub) break;
        s = s.substr(numbers);
        k++;
    }
    if ((k-1) == times) return true;
    return false;
}
/* Main()  function */
int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif
	string line, part;
	getline(cin, line);
	stringstream ss(line);
	ll res;
	vector<pll> ranges;
	while (getline(ss, part, ',')) {
		ll x, y;
		sscanf(part.c_str(), "%lld-%lld", &x, &y);
		ranges.pb({x, y});
	}
	for (auto &r : ranges) {
		cout << r.first << " to " << r.second << "\n";
		cf(i,r.first,r.second){
			ll x, y;
			if (invalid(i)){
				res += i;
				cout << "Invalid number: " << i << "\n";
			}
		}
	}
	cout << "Result " << ": " << res << "\n";
	return 0;
}
/* Main() Ends Here */