#include<bits/stdc++.h>
using namespace std;

int main () {
     long long tt; cin >> tt; while (tt--) {
          long long a, b; cin >> a >> b;

          long long ans = 0;
          while (b > 1) {
               ans += 1; b /= 2;
          }
          cout << ans << '\n';
     }
     return 0;
}