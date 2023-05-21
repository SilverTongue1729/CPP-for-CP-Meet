#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string s = "string";
  cin >> s;
  cout << "s = " << s << "\n";
  
  cout << "s.size() = " << s.size() << "\n";
  
  for (int i = 0; i < s.size(); i++) {
    cout << s[i];
  }
  cout << "\n";
  
  s += " is a string";
  cout << "s = " << s << "\n";
  
  if (s == "string is a string")
    cout << "s == \"string is a string\"\n";
    
  return 0;
}