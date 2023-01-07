#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);

  	//input and process section
  	int n, m;
  	scanf("%d %d", &n, &m);
   	int regular_array[n];
   	int size = sqrt(n);
  	int decomposed_array[n];
  	for(int i=0; i<n; i++)
  		decomposed_array[i] = 0;
  	int temp_max = -1;
  	for(int i=0; i<n; i++){
  		int temp;
  		scanf("%d", &temp);
  		regular_array[i] = temp;
  		if(temp_max<temp)
  			temp_max = temp;
  		if((i+1)%size == 0){
  			decomposed_array[i] = temp_max;
  			temp_max = -1;
  		}
  	}
  	int prefix_sum_array[n];
  	for(int i=0; i<n; i++){
  		int temp;
  		scanf("%d", &temp);
  		if(i==0)
  			prefix_sum_array[i] = temp;
  		else
  			prefix_sum_array[i] = prefix_sum_array[i-1]+temp;
  	}

  	//output section
  	for(int i=0; i<m; i++){
  		int max_ = -1;
  		int x, y;
  		scanf("%d %d", &x, &y);
  		int temp_x = x;
  		while(x<y && x%size!=0){
  			if(regular_array[x]>max_)
  				max_ = regular_array[x];
  			x++;
  		}
  		x += size-1;
  		while(x <= y){
  			if(decomposed_array[x]>max_)
  				max_ = decomposed_array[x];
  			x += size;
  		}
  		x -= size;
  		x++;
  		while(x<=y){
  			if(regular_array[x]>max_)
  				max_ = regular_array[x];
  			x++;
  		}
  		printf("%d ", max_);
  		if(temp_x==0)
  			printf("%d", prefix_sum_array[y]);
  		else
  			printf("%d", prefix_sum_array[y]-prefix_sum_array[temp_x-1]);
  		if(i!=m-1)
  			printf("\n");
  	}
  	
  	return 0;
}