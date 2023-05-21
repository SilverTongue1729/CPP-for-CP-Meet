
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  set<int> s;
  
  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.insert(4);
  s.insert(5);

  for (auto x : s) cout << x << " ";
  cout << "\n";

  s.erase(1);
  for (auto x : s) cout << x << " ";
  cout << "\n";
  
  if (s.find(2) != s.end()) cout << "2 is in the set\n";


  cout << "\n";
  cout << "\n";

  cout << "multiset:\n";
  multiset<int> ms = {1, 2, 3, 4, 5};
  ms.insert(2);
  ms.insert(3);
  
  for (auto x : ms) cout << x << " ";
  cout << "\n";

  ms.erase(2);
  for (auto x : ms) cout << x << " ";
  cout << "\n";

  ms.erase(ms.find(3));
  for (auto x : ms) cout << x << " ";
  cout << "\n";
  
  ms.insert(2);
  ms.insert(2);
  
  cout << "ms.count(2) = " << ms.count(2) << "\n";
  cout << "ms.count(4) = " << ms.count(4) << "\n";
  cout << "ms.count(6) = " << ms.count(6) << "\n";
  

  return 0;
}