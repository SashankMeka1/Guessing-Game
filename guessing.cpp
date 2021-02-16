#include <stdlib.h>
#include<iostream>
using namespace std;
bool game(int num, int guesses){
	int guess;//guessing function get the guess
	cout << "gib guess"<<endl;
	cin >> guess;//check guess recurse if wrong
	if(guess>num){
		guesses++;
		cout <<"you overshot"<<endl;
		return	game(num, guesses);
	}
	if(guess < num){
		guesses++;
		cout << "you undershot"<<endl;//tell if over or under increment guesses
		return game(num, guesses);
	}
	if(guess == num){
		guesses++;//print guesses at end
		cout << "Guesses "<< guesses<<endl;
		return true;
	}
	return false;
}
int main(){
	int guesses = 0;
	srand(time(NULL));//set time
	int num = rand()%101;
	char response[3];
	if(game(num, guesses)){//ask to play again and exit or play again
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

