#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, mid, bot, m[100][100];
  while (cin >> n && n != 0) {
    mid = (n % 2 == 0 ? n / 2 : (n / 2) + 1);
    for (int i = 0; i < mid; ++i) {
      bot = (n - 1) - i;
      for (int j = i; j <= bot; ++j) {
        m[i][j] = i + 1;
        m[bot][j] = i + 1;
        m[j][i] = i + 1;
        m[j][bot] = i + 1;
      }
    }
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j)
        if (j == 0)
          cout << setw(3) << m[i][j];
        else
          cout << ' ' << setw(3) << m[i][j];
        cout << '\n';
    }
    cout << '\n';
  }
  return 0;
}