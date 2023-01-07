#include <bits/stdc++.h>
using namespace std;

vector<int> store;
vector<vector<int>> record;

void ADD(int i, int j);
void DELETE(int i, int j);
void BOMB(int i, int j);
void LAZER(int j);
void DISPLAY();

int main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
	
	//input section
  	int n, t;
  	scanf("%d", &n);
  	scanf("%d", &t);
  	int temp;
  	for(int i=0; i<n; i++){
  		scanf("%d", &temp);
  		store.push_back(temp);
	}
  
  	//process section (including sub-input)
  	int num_parameter;
  	for(int i=0; i<t; i++){
    	vector<int> data;
    	scanf("%d", &temp);
    	data.push_back(temp);
    	if(data[0] == 4)
    		num_parameter = 1;
		else
			num_parameter = 2;
		for(int j=0; j<num_parameter; j++){
	  		scanf("%d", &temp);
	  		data.push_back(temp);			
		}

    	switch(data[0]){
    		case 1:
        		ADD(data[1], data[2]);
        	break;
    		case 2:
        		DELETE(data[1], data[2]);
        	break;
    		case 3:
        		BOMB(data[1], data[2]);
        	break;
    		case 4:
        		LAZER(data[1]);
        	break;
    	}
    	
    	record.push_back(store);
  	}
  
  	//output section
  	DISPLAY();
  
  	return 0;
}

void ADD(int i, int j){
  	if(store[i-1] < j)
    	store[i-1]++;
}

void DELETE(int i, int j){
  	if(store[i-1] >= j)
    	store[i-1]--;  
}

void BOMB(int i, int j){
 	if(i==1){
	    for(int k=0; k<2; k++){
	    	int temp = j-store[k];
	    	if(temp >= 2)
	    		continue;
	    	else if(temp >= 1)
	    		store[k]--;
	    	else if(temp >= 0 || j==1)
	    		store[k] -= 2;
	    	else
	    		store[k] -= 3;
		}
  	}
  	else if(i==store.size()){
    	for(int k=store.size()-2; k<store.size(); k++){
  			int temp = j-store[k];
    		if(temp >= 2)
    			continue;
    		else if(temp >= 1)
    			store[k]--;
    		else if(temp >= 0 || j==1)
    			store[k] -= 2;
    		else
    			store[k] -= 3;
		}
  	}
  	else{
    	for(int k=i-2; k<i+1; k++){
    		int temp = j-store[k];
    		if(temp >= 2)
    			continue;
    		else if(temp >= 1)
    			store[k]--;
    		else if(temp >= 0 || j==1)
    			store[k] -= 2;
    		else
    			store[k] -= 3;
		}
  	}
}

void LAZER(int j){
  	for(int i=0; i<store.size(); i++){
    if(store[i] >= j)
      	store[i]--;  
  	}
}

void DISPLAY(){
	for(int j=0; j<record.size(); j++){
		for(int i=0; i<record[j].size(); i++){
			printf("%d", record[j][i]);
			if(i != record[j].size()-1)
				printf(" ");
		}
		printf("\n");	
	}
}
