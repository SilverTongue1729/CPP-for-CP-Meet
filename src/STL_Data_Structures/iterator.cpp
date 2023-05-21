#include <bits/stdc++.h>
using namespace std;

vector<int> global_vec;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  vector<int> v = {1,2,3,4,5};
  
  vector<int>::iterator it = v.begin();
  while (it != v.end()) {
    cout << *it << " ";
    it++;
  }
  cout << "\n";
  
  auto it2 = v.begin();
  
  auto it_rev = v.rbegin();
  for (auto it_rev = v.rbegin();it_rev != v.rend(); it_rev++) {
    cout << *it_rev << " ";
  }
  cout << "\n";
  
  for (auto x : v)
    cout << x << " ";
    
  return 0;
}