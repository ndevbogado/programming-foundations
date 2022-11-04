#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

void fileInputMenu();
void recursion();
string openFile();

void lineAndCharCounter();
void programmaticWriting();
void modifyFile(string writeFile);
void arrayManipulation();

int main(){

	fileInputMenu();
}

void fileInputMenu() {
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
					lineAndCharCounter();			
				}
				break;
			case 2:
				{
					arrayManipulation();
					
				}
				break;
			case 3:
				{
					programmaticWriting();
				}
				break;
			default:
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

void lineAndCharCounter () {
	ifstream fin;	
	
	string fileName = openFile();	
	fin.open(fileName);
	if (fin.good()){
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
	} else {  
		cout<<"An Error has occurred while opening: "<<fileName<<endl;	
		recursion();
	}
}

void programmaticWriting () {

	//Write a program that allows the user to write input to a text file lone by line, until they enter 'quit'.
	ifstream ifile;

	string writeFile = openFile();
	ifile.open(writeFile);

	if (ifile) {
		cout<<writeFile<<" exists.\nDo you want to overwrite it? (Type 'Y' or 'N') ";

	} else {
		cout<<writeFile<<" doesn't exist.\nDo you want to create it? (Type 'Y' or 'N') ";

	}
	
	ifile.close();

	char manipulate;
	cin>>manipulate;

	if (manipulate == 'Y' || manipulate == 'y') {
		modifyFile(writeFile);

	} else {
			
		recursion();
	}
}

void modifyFile (string writeFile) {

	ofstream fout;
	fout.open(writeFile,fstream::app);

	cout<<"(Type 'quit' to exit) -- Write here: ";
	string myInput;	
	getline(cin>>ws,myInput);
	if (myInput != "quit"){
		fout<<myInput<<endl;		
		modifyFile(writeFile);

	} else {
		fout.close();
		recursion();

	}
}
void arrayManipulation () {
	//write a program to input a specified number of integers values from a file into an array, sort the array from lowest to highest and output the array to the console.
	ifstream fin;
	string fileName = openFile();
	fin.open(fileName);

	if (fin.good()) {
		cout<<"file opened"<<endl;

		cout<<"Enter the number of integers (greater than 1) you want to work with: ";
		int quantity;
		cin>>quantity;	
		int numList[quantity];
		for (int i = 0 ; i < quantity ; i++) {
			fin>>numList[i];
			cout<<"Number "<<i<<" : "<<numList[i]<<endl;

		}

		int unorganizedCounter;
		int aux;
		bool notOrganized = true;
		while (notOrganized) {
			unorganizedCounter = 0;
			for (int i = 0 ; i < quantity-1 ; i++){
				if (numList[i] > numList[i+1]) {
					aux = numList[i+1];
					numList[i+1] = numList[i];
					numList[i] = aux;
					
					unorganizedCounter++; 	
				} 
			}
			if (unorganizedCounter == 0) {
				notOrganized = false;
			}
		}


		int lowestToHighest[quantity];
		for (int i = 0 ; i < quantity ; i++) {
			lowestToHighest[i] = numList[i];
			cout<<lowestToHighest[i]<<endl;
		}

	} else {
		cout<<"An error has occurred while opening the file..."<<endl;
	}
	
	fin.close();
	recursion();
}
