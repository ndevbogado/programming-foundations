#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ifstream fin;
	
	string fileName;
	cout<<"Type the location and the file's name you want to open: ";
	cin>>fileName;

	fin.open(fileName);
	if (fin.good()){
		cout<<fileName<<" opened successfully!"<<endl;
	} else {
		cout<<"An Error has occurred while opening: "<<fileName<<endl;	
	}
}


//Write a program to count the number of lines and the number of characters in a text file.\
//write a program to input a specified number of integers values from a file into an array, sort the array from lowest to highest and output the array to the console.
//Write a program that allows the user to write input to a text file lone by line, until they enter 'quit'.


