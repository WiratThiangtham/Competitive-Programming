#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  int max_ = 0;
  int sum_ = 0;
  scanf("%d", &n);
  int nums[n];
  for(int i=0; i<n; i++){
    scanf("%d", &nums[i]);
  }

  for(int i=0; i<n; i++){
    sum_ = max(sum_+nums[i], nums[i]);
    if(max_<sum_){
      max_ = sum_;
    }
  }

  printf("%d", max_);
  
  return 0;
}