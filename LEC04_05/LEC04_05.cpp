#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	long long n;
	long long count=0;
	cin >> n;
	vector<pair<long long, long long>> list;
	for(int i=0; i<=n; i++){
		vector<long long> temp_pair;
		long long temp_num[2];
		long long index=0;
		pair<long long, long long> pair_;
		string s;
		getline(cin, s);
		istringstream is(s);
		long long temp;
		while(is>>temp) temp_pair.push_back(temp);
		for(auto& i : temp_pair){
			temp_num[index] = i;
			index++;
		}
		if(temp_num[0] >= temp_num[1])
			continue;
		pair_.first = temp_num[1];
		pair_.second = temp_num[0];
		list.push_back(pair_);
	}
	
	sort(list.begin(), list.end());
	
	long long last = -1;
	for(auto& i : list){
		if(last <= i.second){
			count++;
			last = i.first;
		}	
	}
	
	cout << count;
	
	return 0;
}
