#include <bits/stdc++.h>
using namespace std;

vector<int> global_vec;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  vector<int> v(5,0);  // length, initial value
  vector<int> v2 = {1,2,3,4,5};
  
  cout << "Input " << v.size() << " numbers: ";
  for (int i = 0; i < v.size(); i++) {
    cin >> v[i];
  }
  
  v.push_back(6);  // add element at the end
  v.pop_back();  // remove element at the end
  
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  
  int vec_size;
  cout << "\nInput vector size: ";
  cin >> vec_size;
  global_vec.resize(vec_size);
  
  vector<string> vec_str = {"hello", "world"};
  
  for (int i = 0; i < vec_str.size(); i++)
    cout << vec_str[i] << " ";
  
  vector<vector<int>> vec_2d(3, vector<int>(3, 0));
  
  cout << "\nUutput 2D vector:\n";
  for (int i = 0; i < vec_2d.size(); i++) {
    for (int j = 0; j < vec_2d[i].size(); j++)
      cout << vec_2d[i][j] << " ";
    cout << "\n";
  }
  
  
  global_vec.assign(vec_size, 1);
  global_vec.clear();
    
  return 0;
}