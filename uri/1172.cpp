#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector <int> v(10);
  for (auto &i : v)
    cin >> i;
  for (int i = 0; i < 10; ++i)
    if (v[i] <= 0)
      v[i] = 1;
  for (int i = 0; i < 10; ++i)
    cout << "X[" << i << "] = " << v[i] << '\n';
  return 0;
}