
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  map<int,int> m;
  m[1] = 2;
  m[2] = 3;
  m[3] = 4;
  
  cout << m[1] << "\n";
  
  for (auto x : m) cout << x.first << " " << x.second << "\n";
  cout << "\n";
  
  m.erase(1);
  
  for (auto x : m) cout << x.first << " " << x.second << "\n";
  cout << "\n";
  
  if (m.find(2) != m.end()) cout << "2 is in the map\n";
  
  for (auto x : m) cout << x.first << " " << x.second << "\n";
  cout << "\n";
  
  
  return 0;
}