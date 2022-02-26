#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  char c;
  double n[12][12], s = 0.0;
  cin >> c;
  for (int i = 0; i < 12; ++i) {
    for (int j = 0; j < 12; ++j) {
      cin >> n[i][j];
      if (i > j && (i + j) < 11)
        s += n[i][j];
    }
  }
  cout << fixed << setprecision(1);
  if (c == 'S')
    cout << s << '\n';
  else
    cout << s / 30.0 << '\n';
  return 0;
}