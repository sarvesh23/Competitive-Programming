#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ull n;
  cin >> n;
  vector <ull> v(n);
  for (auto &i : v)
    cin >> i;

  ull maxi = v[n - 1];
  for (int i = n - 2; i >= 0; --i) {
    maxi = max(maxi, v[i]);
    v[i] = maxi;
  }

  for (auto i : v)
    cout << i << ' ';
  return 0;
}