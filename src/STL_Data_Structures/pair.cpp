#include <bits/stdc++.h>
using namespace std;

vector<int> global_vec;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  pair<int,string> p = {1, "one"};
  
  cout << p.first << " " << p.second << "\n";
  
  int n = 5;
  string s = "five";
  pair<int,string> p2 = make_pair(n, s);  
  
  pair<int,pair<int,int>> p3 = {1, {2,3}};
  
    
  return 0;
}