#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	//input section
	int n;
	scanf("%d", &n);
	int nums[n];
	int sum = 0;
	for(int i=0; i<n; i++){
		scanf("%d", &nums[i]);
		sum += nums[i];
	}
	int threshold = sum/n;
	
	//process section
	int count = 0;
	int diff;
	for(int i=0; i<n; i++){
		diff = nums[i]-threshold;
		if(diff > 0){
			count += diff;
		}
	}
	
	//output section
	printf("%d", count);
	
	return 0;
}
