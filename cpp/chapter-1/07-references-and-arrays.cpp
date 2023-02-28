#include <iostream>
#include <cmath>
#include <array>

using namespace std;

void realRoots(double&a,double&b,double&c,double&firstRoot,double&secondRoot, bool&isReal);

void menu ();

void inverseString(char cstring[], int size);

void recursion();

//Write a function that puts values into an array of integers, another function that sorts the values from lowest to highest and finally a function to output the array.

int main() {
	menu();
}

void menu() {
	int decision;

	cout<<"REFERENCES AND ARRAYS MENU: "<<endl;
	cout<<"================================================"<<endl;
	cout<<"(1) Calculate real roots of quadratic equations."<<endl;
	cout<<"(2) Basic array manipulation."<<endl;
	cout<<"(3) Basic C-style string manipulation."<<endl;
	cout<<"(4) Exit program."<<endl;
	cout<<"------------------------------------------------"<<endl;
	cin>>decision;

	double a;
	double b;
	double c;

	double firstRoot;
	double secondRoot;
	
	bool isReal=true;
	switch(decision) {
		case 1: 
			
			do {
				cout<<"Enter the first, non '0',  parameter 'a': "<<endl;
				cin>>a;
			} while (a == 0);
			cout<<"Enter the second parameter 'b': "<<endl;
			cin>>b;
			cout<<"Enter the third parameter 'c': "<<endl;
			cin>>c;
			
			
			realRoots(a,b,c,firstRoot,secondRoot, isReal);
			if (isReal) {
				cout<<"# X1 = "<<firstRoot<<endl;
				cout<<"# X2 = "<<secondRoot<<endl;
			}
			recursion();
			break;
		case 2:
			cout<<"Manipulating arrays..."<<endl;
			recursion();
			break;
		case 3:
			{
			int size;
			int realSize;
			bool repeated = false;
	
			cout<<"Enter the length of your string: "<<endl;
			cin>>size;
			char cstring[size];
		
			do {
				realSize = 0;
				if(!repeated)
					cout<<"Enter a string you want to manipulate: ( size = "<<size<<" )"<<endl;
				cin>>cstring;
				for (int i = 0; cstring[i]; i++){
					realSize++;
					repeated = true;
				}
				if (realSize != size) 
					cout<<"Please... Enter a string you want to manipulate with a length of "<<size<<" character: ( last string size = "<<realSize<<" )"<<endl;
			} while(size != realSize);

			inverseString(cstring,size);
			recursion();
			}
			break;
		default:
			char exit;
			cout<<"Do You want to exit? (Type 'Y' or 'N')";
			cin>>exit;
			if (exit != 'Y' || exit !='y') 	{
				//recursion
				cout<<"recursion"<<endl;
			} else {
				cout<<"Good-Bye!"<<endl;
			}
			break;
	}
}

void realRoots(double&a,double&b, double&c, double&firstRoot, double&secondRoot, bool&isReal){
	//Write a function (using reference parameters) that calculates the roots of a quadratic functions (feel free to use cmath for square roots and powers).
	double rootArgument = pow(b,2)-4*a*c;

	if (rootArgument < 0) {
		cout<<"There aren't any real roots for the quadratic equation entered"<<endl;
		isReal = false;
	} else {
		double squareRoot = sqrt(rootArgument);
		
		firstRoot = (-b + squareRoot)/(2*a);
		secondRoot = (-b - squareRoot)/(2*a);

	}	
}

void inverseString(char cstring[], int size) {
//Write a program to input a c-style string and output it backwards, character by characte, encoded with a code-wheel type offset (each character is offset).
	
	char auxString [size];
	for (int i = 0; cstring[i]; i++) {
		auxString[i] = cstring[size - 1 - i];
	} 
	cout<<"Original String: "<<cstring<<endl;
	cout<<"Inverted String: "<<auxString<<endl;
}

void recursion() {
	cout<<"Process terminated! Do you want to reiterate? (Type 'Y' or 'N')"<<endl;
	char recursion;
	cin>>recursion;
	if (recursion == 'Y' || recursion == 'y') {
		menu();
	} else {
		cout<<"Good-Bye!"<<endl;
	}
}
