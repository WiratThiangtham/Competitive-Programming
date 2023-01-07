#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string numList;
	getline(cin, numList);
	vector<int> nums;
	istringstream is(numList);
	int temp;
	while(is>>temp) nums.push_back(temp);
	int MaxGCD=0;
	int CurGCD;
	
	for(int i=0; i<nums.size(); i++){
		for(int j=i+1; j<nums.size(); j++){
			CurGCD = __gcd(nums[i], nums[j]);
			if(MaxGCD < CurGCD)
				MaxGCD = CurGCD;
		}
	}
	
	printf("%d", MaxGCD);
	
	return 0;
}
