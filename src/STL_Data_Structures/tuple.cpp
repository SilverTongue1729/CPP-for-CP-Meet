#include <bits/stdc++.h>
using namespace std;

vector<int> global_vec;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  tuple<int,int,int> t = {1,2,3};
  
  cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << "\n";
    
    
  return 0;
}