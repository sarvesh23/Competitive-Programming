#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll t, n, m;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    ll count = 0;
    vector <ll> v(n + 1, 1);

    for (ll i = 2; i <= n; ++i) {
      ll a = m % i;
      count += v[a];
      for (ll j = a; j <= n; j += i)
        ++v[j];
    }
    cout << count << '\n';
  }
  return 0;
}

//piyush solution
