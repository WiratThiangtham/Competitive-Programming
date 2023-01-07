#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	long long n;
	cin >> n;
	
	if(sqrt(n) == (long long)sqrt(n))
		printf("%d", (long long)sqrt(n)-1);
	else
		printf("%d", (long long)floor(sqrt(n)));
	
	return 0;
}
