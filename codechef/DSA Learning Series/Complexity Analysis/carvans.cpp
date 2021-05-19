#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    vector <int> v(n);
    for (auto &i : v)
      cin >> i;
    int total = 1, current_maximum = v[0];
    for (int i = 1; i < n; ++i) {
      if (v[i] <= current_maximum) {
        current_maximum = v[i];
        ++total;
      }
    }
    cout << total << '\n';
  }
  return 0;
}
