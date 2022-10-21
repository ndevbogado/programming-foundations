#include <iostream>
#include <cmath>


using namespace std;

void realRoots(double&a,double&b,double&c,double&firstRoot,double&secondRoot);

//Write a function that puts values into an array of integers, another function that sorts the values from lowest to highest and finally a function to output the array.
//Write a program to input a c-style string and output it backwards, character by characte, encoded with a code-wheel type offset (each character is offset).

int main() {
	
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
