#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);

  	//input and process section
  	set<string> words;
  	string text_without_symbol = "";
  	char word[201];
  	for(int j=0; j<201; j++)
  		word[j] = ' ';
  	while(scanf("%200s", word) != EOF){
  		for(auto i : word){
  			if(isalpha(i))
  				text_without_symbol += tolower(i);
  			else if(i == ' ')
  				break;
  			else{
		  		words.insert(text_without_symbol);
		  		text_without_symbol = "";
			}
		}
  		words.insert(text_without_symbol);
  		text_without_symbol = "";
	  	for(int j=0; j<201; j++)
	  		word[j] = ' ';
	}
	words.erase("");

  	//output section
  	int count = 0;
  	for(auto i : words){
  		count++;
  		cout << i;
  		if(count != words.size())
  			cout << endl;
	}
  
  	return 0;
}
