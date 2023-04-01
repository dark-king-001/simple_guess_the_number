#include <iostream>
#include <string>
#include <cstdlib>
#include <Time.h>
using namespace std;
/*
0.input no of users name of users
1.table
2.sorter
3.random number generator
4.scoring system
*/
//GTN :: guess the number
class GTN{
public:
	int play;
	string nam[9];
	int randm;
	int guess[9];
	
	void players(){
		cout << "Enter the number of players:";
		cin >> play;
	}
	void names(){
		cout << "Enter the name of players"<<endl;
		for (int i=0; i<play;i++){
			cin >> nam[i];
		}
		cout << "Lets Start the Game:"<<endl;
	}
	void random(){
		srand(time(0));
		randm = (rand()%play)+1;
	}
	void score(){
		for (int i = 0 ; i < play ; i++){
			cout << "its your turn:"<<nam[i]<<endl;
			cout << "guess the number:";
			cin >> guess[i];
		}
		cout <<endl;
	}
	void table(){
		cout <<"|        NAME         |    GUESS    |"<< endl;
		
		for (int i = 0;i < play; i++){
			cout << "| " << nam[i];
			for (int j=0 ; j<20-nam[i].length();j++){
			cout << " ";
			}
			cout << "|      " << guess[i] <<"      |"<<endl;
		}
		
		
		for (int i = 0;i < play ;i++){
			if (guess[i]==randm){
				cout << "Congratulations! "<<nam[i]<<" is the winner"<<endl <<"  and his guess is "<<randm;
				break;
			}
		}
	}
};

int main(){	
	cout << "Rules:"<<endl << "a random number will be generated between the 1 n number of players and each player will be given a one chanceto guess it" << endl << "the winner will be chosen one the basis of correct guess"<< endl << "there is no second position lol"<<endl<<"number of players cannot exceed 20"<<endl;
	
	GTN start;
	start.players();
	start.names();
	start.random();
	start.score();
	start.table();
	return 0;
}