//create a program that shows how operator precedence is important. (Basically do whatever you want with a bunch of operators and parenthesis)


#include <iostream>

using namespace std;

int main() {		
//create a program that inputs two integers and displays the number added, subtracted, multiplied and divided.
	int firstInt;
	int secondInt;

	cout<<"Enter the first integer: ";
	cin>>firstInt;
	cout<<"Enter the second integer: ";
	cin>>secondInt;

	int addition = firstInt + secondInt;
	int subtraction = firstInt - secondInt;	
	int multiplication = firstInt * secondInt;	
	int division = firstInt / secondInt;	
	int modulo = firstInt % secondInt;

	cout<<endl<<"The adition result is: "<< addition<<endl;
	cout<<"The subtraction result is: "<<subtraction<<endl;
	cout<<"The multiplication result is: "<<multiplication<<endl;
	cout<<"The division result is: "<<division<<endl;
	cout<<"The modulo result is: "<<modulo<<endl;

//create a program that inputs a character and outputs another character that it corresponds to, like a code wheel.
	char myChar;
	
	cout<<endl<<"Input a Letter: ";
	cin>>myChar;
	myChar += 5;

	cout<<"The output is: "<<myChar<<endl;
	return 0;
}
