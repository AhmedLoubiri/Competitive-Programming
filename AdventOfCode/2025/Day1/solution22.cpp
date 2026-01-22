#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("input.txt","r",stdin);

    long long hits = 0;
    long long pos = 50;
    string s;

    while (getline(cin, s)) {
        if (s.empty()) continue;

        char dir = s[0];
        long long x = stoll(s.substr(1));

        long long k0;

        if (dir == 'R') {
            k0 = (100 - pos) % 100;
            if (k0 == 0) k0 = 100; // starting point, not a click
        } else {
            k0 = pos % 100;
            if (k0 == 0) k0 = 100; // same reason
        }

        if (k0 <= x)
            hits += 1 + (x - k0) / 100;

        // update dial
        if (dir == 'R') pos = (pos + x) % 100;
        else pos = (pos - (x % 100) + 100) % 100;
    }

    cout << hits << "\n";
}
