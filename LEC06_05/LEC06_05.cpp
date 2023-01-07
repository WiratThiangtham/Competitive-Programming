#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);

  	//input section
  	map<string, int> frequency_list;
  	int n;
  	scanf("%d", &n);
  	for(int i=0; i<n; i++){
  		set<int> data;
	  	string str_temp = "";
	  	for(int j=0; j<5; j++){
	  		int int_temp;
	  		scanf("%d", &int_temp);
	  		data.insert(int_temp);
	  	}
	  	for(int i : data)
	  		str_temp += to_string(i);
	  	if(frequency_list.find(str_temp) == frequency_list.end())
	  		frequency_list[str_temp] = 1;
	  	else
	  		frequency_list[str_temp] += 1;
  	}

  	//process section
  	int max_ = 0;
  	int accumulation;
   	map<string, int>::iterator itr;
  	for(itr = frequency_list.begin(); itr != frequency_list.end(); ++itr){
  		if(itr->second > max_){
  			max_ = itr->second;
  			accumulation = itr->second;
  		}
  		else if(itr->second == max_)
  			accumulation += itr->second;
  	}

  	//output section
  	printf("%d", accumulation);
  	
  	return 0;
}