
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> v = {1, 2, 3, 4, 5};
  
  auto it = lower_bound(v.begin(), v.end(), 3);
  cout << *it << "\n";
  cout <<"ind:"<< it - v.begin() << "\n";
  
  auto it2 = upper_bound(v.begin(), v.end(), 3);
  cout << *it2 << "\n";
  cout <<"ind:"<< it2 - v.begin() << "\n";
  
  vector<int> v2 = {1, 2, 3, 3, 3, 4, 5};
  
  it = lower_bound(v2.begin(), v2.end(), 3);
  cout << *it << "\n";
  cout <<"ind:"<< it - v2.begin() << "\n";
  
  it2 = upper_bound(v2.begin(), v2.end(), 3);
  cout << *it2 << "\n";
  cout <<"ind:"<< it2 - v2.begin() << "\n";
  
  
  multiset<int> ms = {1, 2, 3, 3, 3, 4, 5};
  
  auto it3 = ms.lower_bound(3);
  cout << *it3 << "\n";
  
  auto it4 = ms.upper_bound(3);
  cout << *it4 << "\n";  

  

  return 0;
}