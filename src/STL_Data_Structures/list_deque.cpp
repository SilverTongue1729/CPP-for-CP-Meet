
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  list<int> l = {1, 2, 3, 4, 5};
  
  l.push_back(6);
  l.push_front(0);
  
  for (auto x : l) cout << x << " ";
  cout << "\n";
  
  l.pop_back();
  l.pop_front();
  
  for (auto x : l) cout << x << " ";
  cout << "\n";
  
  auto it = l.begin();
  
  l.insert(it, 0);
  
  for (auto x : l) cout << x << " ";
  cout << "\n";
  
  l.erase(it); // what will this do?
  
  for (auto x : l) cout << x << " ";
  cout << "\n";
  
  it = l.begin();
  advance(it, 2);
  
  l.insert(it, 0);
  
  for (auto x : l) cout << x << " ";
  cout << "\n";
  
  return 0;
}