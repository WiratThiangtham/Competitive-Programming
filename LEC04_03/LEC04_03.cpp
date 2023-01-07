#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	scanf("%d", &n);
	int min_ = n;
	
	for(int i=1; i<=n; i*=2){
		int temp = (int)(ceil((double)n/(double)i))+(log((double)i)/log((double)2));
		if(temp < min_)
			min_ = temp;
	}
	
	printf("%d", min_);
	
	return 0;
}
