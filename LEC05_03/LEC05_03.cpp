#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	//input section
	deque<char> characters;
	bool insert_back = true;
	string message;
	cin >> message;
	
	//process section
	vector<char> temp_characters;
	for(char i : message){
		if(i == '['){
			for(int j = temp_characters.size()-1; j>=0; j--){
				characters.push_front(temp_characters[j]);
			}
			temp_characters.clear();
			insert_back = false;
		}	
		else if(i == ']'){
			for(int j = temp_characters.size()-1; j>=0; j--){
				characters.push_front(temp_characters[j]);
			}
			temp_characters.clear();
			insert_back = true;
		}
		else{
			if(insert_back == true)
				characters.push_back(i);
			else
				temp_characters.push_back(i);
		}
	}
	for(int i=temp_characters.size()-1 ; i>=0; i--){
		characters.push_front(temp_characters[i]);
	}
	
	//output section
	for(char i : characters){
		printf("%c", i);
	}
	  
	return 0;
}
