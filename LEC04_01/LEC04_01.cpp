#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  scanf("%d", &n);
  bool nums[n+1];
  memset(nums, true, sizeof(nums));
  
  for(int p=2; p*p<+n; p++){
    if(nums[p]){
      for(int i=p*2; i<=n; i+=p)
        nums[i] = false;
    }
  }

  for(int i=2; i<=n; i++){
    if(i!=2 && nums[i])
      printf(" ");
    if(nums[i])
      printf("%d", i);
  }

  return 0;
}