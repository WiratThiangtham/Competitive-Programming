#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b;
  scanf("%d %d", &a, &b);
  int count = 0;
  bool nums[b+1];
  memset(nums, true, sizeof(nums));
  
  for(int p=2; p*p<+b; p++){
    if(nums[p]){
      for(int i=p*2; i<=b; i+=p)
        nums[i] = false;
    }
  }
  
  for(int i=a; i<=b; i++){
    if(nums[i])
      count++;
  }

  printf("%d", count);

  return 0;
}