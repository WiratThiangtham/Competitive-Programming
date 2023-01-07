#include<bits/stdc++.h>
using namespace std;
int main(){
  	ios::sync_with_stdio(0);
  	cin.tie(0);
  	
  	long long n;
  	long long adder = 0;
  	long long sum_ = 0;
  	scanf("%lld", &n);
  	
  	for(long long i=1; i<=n; i++){
  		adder += i;
		sum_ += adder;
	  }
  	printf("%lld", sum_);
  	
  	return 0;
}
