#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);

  	//input and process section
  	int n, m;
  	scanf("%d", &n);
  	scanf("%d", &m);
  	int prefix_sum_array[n];
  	for(int i=0; i<n; i++){
  		int temp;
  		scanf("%d", &temp);
  		if(i == 0)
  			prefix_sum_array[i] = temp;
  		else
  			prefix_sum_array[i] = prefix_sum_array[i-1] + temp;
  	}

  	//output section
  	for(int i=0; i<m; i++){
  		int x, y;
  		scanf("%d", &x);
  		scanf("%d", &y);
  		if(x==0)
  			printf("%d", prefix_sum_array[y]);
  		else
  			printf("%d", prefix_sum_array[y]-prefix_sum_array[x-1]);
  		if(i!=m-1)
  			printf("\n");
  	}
  	
  	return 0;
}