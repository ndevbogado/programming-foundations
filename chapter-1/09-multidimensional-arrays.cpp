#include <iostream>
#include <fstream>
// for rand() usage
#include <cstdlib>
#include <time.h>

using namespace std;

int randomNumber(bool &createSeed);

int main () {
	bool createSeed = true;
	for ( int i = 0 ; i < 5 ; i++) {
		cout<<randomNumber(createSeed)<<" ";
	}
	cout<<endl;
}

int randomNumber(bool &createSeed){
	if (createSeed) {
		srand(time(0));
		createSeed = false;
		cout<<"Seed created successfully!"<<endl;
	}	
	return rand()%10;
}

//Alphabetize a string input. Remember that the value of the characters increase from 'a'
//Sort a randomized 2D array of integers using whichever algorithm you want. You should order the rows by their first (minimum) elements.
//Read in a 2D array of c-strings from a file and print them into the screen. Aditionally, try sorting them alphabetically, and transferring the data to a one-dimensional array of c-strings.

