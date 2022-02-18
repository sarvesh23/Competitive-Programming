#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b, total = 0;
  cin >> a;
  while (true) {
    cin >> b;
    if (b > 0)
      break;
  }
  for (int i = 0; i < b; ++i)
    total += a + i;
  cout << total << '\n';
  return 0;
}