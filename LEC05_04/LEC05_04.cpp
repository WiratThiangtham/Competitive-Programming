#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	//input section
	string characters;
	cin >> characters;	
	
	//process section
	int min_diff;
	int temp;
	int index;
	vector<char> bunches;
	for(char i : characters){
		min_diff = 1000;
		for(int j=0; j<bunches.size(); j++){
			temp = bunches[j]-i;
			if(min_diff > temp && temp >= 0){
				min_diff = temp;
				index = j;
			}	
		}
		if(min_diff != 1000)
			bunches[index] = i;
		else
			bunches.push_back(i);
	}
	
	//output section
	cout << bunches.size();
	
	  
	return 0;
}
