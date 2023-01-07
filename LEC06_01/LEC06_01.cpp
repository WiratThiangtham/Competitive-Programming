#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  //input section
  int n;
  cin >> n;
  string s;
  priority_queue<int, vector<int>, greater<int>> q;
  int temp;
  for(int i=0; i<n; i++){
    cin>>temp;
    q.push(temp);    
  }
  
  //process section
  long long cost = 0;
  long long sum_ = 0;
  while(q.size() > 1){
    sum_ += q.top();
    q.pop();
    sum_ += q.top();
    q.pop();
    cost += sum_;
    q.push(sum_);
    sum_ = 0;    
  }

  //output section
  cout << cost;
  
  return 0;
}