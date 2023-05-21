
#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b) {
  return a < b;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> v = {5, 4, 3, 2, 1};

  sort(v.begin(), v.end());

  for (auto x : v) cout << x << " ";
  cout << "\n";

  sort(v.rbegin(), v.rend());

  for (auto x : v) cout << x << " ";
  cout << "\n";

  sort(v.begin(), v.end(), compare);

  for (auto x : v) cout << x << " ";
  cout << "\n";

  vector<pair<int, int>> vp = {{5, 2}, {3, 4}, {3, 3}, {1, 6}};
  sort(vp.begin(), vp.end());
  
  for (auto x : vp) cout << x.first << " " << x.second << "\n";
  
  return 0;
}