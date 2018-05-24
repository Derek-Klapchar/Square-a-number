/*


*/

#include <iostream> 
using namespace std;

int main() {
	int squares[10][2] = {
		1, 1,
		2, 4,
		3, 9,
		4, 16,
		5, 25,
		6, 36,
		7, 49,
		8, 64,
		9, 81,
		10, 100
	};

	int userInput;
	bool foundSquare = false;

	cout << "Enter a number to square: ";
	cin >> userInput;

	for(int i = 0; i < 10; i++){
		if(userInput == squares[i][0]){
			cout << userInput << " squared = " << squares[i][1] << endl;
			foundSquare = true;
			break;
		}
	}

	if(! foundSquare){
		cout << "Sorry! I do not know that one." << endl;
	}

	return 0;
}
