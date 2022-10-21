#include <iostream>
#include <cmath>


using namespace std;

void realRoots(double&a,double&b,double&c,double&firstRoot,double&secondRoot);

void menu ();

//Write a function that puts values into an array of integers, another function that sorts the values from lowest to highest and finally a function to output the array.
//Write a program to input a c-style string and output it backwards, character by characte, encoded with a code-wheel type offset (each character is offset).

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

	switch(decision) {
		case 1: 
			double a;
			double b;
			double c;

			double firstRoot;
			double secondRoot;

			cout<<"Enter the first parameter 'a': "<<endl;
			cin>>a;
			cout<<"Enter the second parameter 'b': "<<endl;
			cin>>b;
			cout<<"Enter the third parameter 'c': "<<endl;
			cin>>c;

			realRoots(a,b,c,firstRoot,secondRoot);
			cout<<"# X1 = "<<firstRoot<<endl;
			cout<<"# X2 = "<<secondRoot<<endl;
			break;
		case 2:
			cout<<"Manipulating arrays..."<<endl;
			break;
		case 3:
			cout<<"Manipulating c-strings..."<<endl;
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

void realRoots(double&a,double&b, double&c, double&firstRoot, double&secondRoot){
	//Write a function (using reference parameters) that calculates the roots of a quadratic functions (feel free to use cmath for square roots and powers).
	double rootArgument = pow(b,2)-4*a*c;

	if (rootArgument < 0) {
		cout<<"There aren't any real roots for the quadratic equation entered"<<endl;
	} else {
		double squareRoot = sqrt(rootArgument);
		
		firstRoot = (-b + squareRoot)/(2*a);
		secondRoot = (-b - squareRoot)/(2*a);

	}

	
}
