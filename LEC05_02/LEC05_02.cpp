#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	//input section
	vector<string> words;
	string str;
	getline(cin, str);
	string temp;
	istringstream is(str);
	while(is>>temp) words.push_back(temp);
	
	//output section
	for(string i : words){
		for(int j=i.size()-1; j>=0; j--){
			printf("%c", i[j]);
		}
		printf(" ");
	}
	
	return 0;
}
