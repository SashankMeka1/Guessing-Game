#include <stdlib.h>
#include<iostream>
using namespace std;
bool game(int num){
	int guess;//guessing function get the guess
	cout << "gib guess"<<endl;
	cin >> guess;//check guess recurse if wrong
	if(guess>num){
		cout <<"you overshot"<<endl;
		return	game(num);
	}
	if(guess < num){
		cout << "you undershot"<<endl;
		return game(num);
	}
	if(guess == num){
		return true;
	}
	return false;
}
int main(){
	srand(time(NULL));//set time
	int num = rand()%101;
	char response[3];
	if(game(num)){//ask to play again and exit or play again
		cout << "YOU GOT IT! type yes or no if you want to either play again or quit"<< endl;
		cin >> response;
		if(response[0]=='y'){
			main();
		}
		else{
			return 0;
		}
	}
}

