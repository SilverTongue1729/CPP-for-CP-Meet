
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  priority_queue<int> pq;  // max heap by default
  pq.push(1);
  pq.push(2);
  pq.push(3);
  
  while (!pq.empty()) {
    cout << pq.top() << " ";
    pq.pop();
  }
  
  priority_queue<int, vector<int>, greater<int>> pq2;  // min heap
  pq2.push(1);
  pq2.push(2);
  pq2.push(3);
  
  while (!pq2.empty()) {
    cout << pq2.top() << " ";
    pq2.pop();
  }

  return 0;
}