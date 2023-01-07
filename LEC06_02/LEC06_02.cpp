#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);

  	//input section
  	int N, M;
  	scanf("%d", &N);
  	scanf("%d", &M);
  	int num_players = pow(2, N);
  	bool player_status[num_players];
  	for(int i=0; i<pow(2, N); i++)
  		player_status[i] = true;
  	int temp;
  	for(int i=0; i<M; i++){
  		scanf("%d", &temp);
  		player_status[temp-1] = false;
  	}
  
  	//process section
	int count = 0;
	int i = 0;
	bool player1;
	bool player2;
	while(pow(2, N-i) != 1){
		for(int j=0, k=0; j<pow(2, N-i); j+=2, k++){
			player1 = player_status[j];
			player2 = player_status[j+1];
			if(player1 != player2)
				count++;
			player_status[k] = player1||player2;
		}
		i++;
	}

  	//output section
  	printf("%d", count);
  
  	return 0;
}
