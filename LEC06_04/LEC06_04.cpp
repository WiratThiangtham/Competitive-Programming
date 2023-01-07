#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);

  	//input section
  	string code;
  	cin >> code;
  
  	//process section
  	bool is_no_successor = true;
  	multiset<char> stock;
  	int temp;
  	for(int i=code.size()-1; i>0; i--){
  		if(code[i] <= code[i-1])
  			stock.insert(code[i]);
  		else if(code[i] > code[i-1]){
  			stock.insert(code[i]);
  			stock.insert(code[i-1]);
  			code[i-1] = *stock.upper_bound(code[i-1]);
  			auto itr = stock.find(code[i-1]);
  			stock.erase(itr);
  			temp = i;
  			is_no_successor = false;
  			break;
  		}
  	}

  	//output section
  	if(is_no_successor)
  		cout << "No Successor";
  	else{
	  	for(char i : stock){
	  		code[temp] = i;
	  		temp++;
	  	}  	
	  	cout << code;	
  	}
  
  	return 0;
}