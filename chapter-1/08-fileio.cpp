#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

void fileInputMenu();
void recursion();
string openFile();

int main(){

	fileInputMenu();
}

void fileInputMenu() {
	ifstream fin;	
	
	string fileName = openFile();	
	fin.open(fileName);
	if (fin.good()){
		//cout<<fileName<<" opened successfully!"<<endl;
		int decision;
		cout<<endl<<"FO/FI MENU (select one option):"<<endl;
		cout<<"==============================="<<endl;
		cout<<"(1) Lines and Characters Counter."<<endl;
		cout<<"(2) Array manipulation with data from external file."<<endl;
		cout<<"(3) File programmating writing."<<endl;
		cout<<"(4) Quit."<<endl;
		cout<<"===============================\n";
		cin>>decision;

		switch (decision) {
			case 1:
				{
					//Write a program to count the number of lines and the number of characters in a text file.
					int charNum = 0;
					int lineNum = 0;
					int number;
					string line;
							
					for (int lines = 0; getline(fin, line); lines++) {
						lineNum++;
						for (int i = 0; line[i]; i++) {
							charNum++;
						}
					}
					
					cout<<"Number of Lines in "<<fileName<<", is: "<<lineNum<<endl;
					cout<<"Number of Characters in "<<fileName<<" is: "<<charNum<<endl;
				
					recursion();
				}
				break;
			case 2:
				{
//write a program to input a specified number of integers values from a file into an array, sort the array from lowest to highest and output the array to the console.
				
				
				}
				break;
			case 3:
				{
					//Write a program that allows the user to write input to a text file lone by line, until they enter 'quit'.
					cout<<"Write a string to test."<<endl;
					string myInput;	
					getline(cin>>ws,myInput);
					cout<<"the string was: "<<myInput<<endl;		
					
					recursion();
				}
				break;
			default:
				recursion();
		}		
	} else {  
		cout<<"An Error has occurred while opening: "<<fileName<<endl;	
		recursion();
	}
}

void recursion() {
	char tryAgain;
	cout<<"Do you want to try it again? (Type 'Y' or 'N') ";
	cin>>tryAgain;

	if (tryAgain == 'Y' || tryAgain == 'y') {
		fileInputMenu();
	} else {
		cout<<"Good-Bye!"<<endl;
	}
}

string openFile() {
	
	string fileName;

	cout<<"Type the location and the file's name you want to open: ";
	cin>>fileName;
	return fileName;
}
