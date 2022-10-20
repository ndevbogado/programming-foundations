#include <iostream>
using namespace std;

void menu();
int calculateFactorialByLoop(int number);
int calculateFactorialByRecursion(int number);

int main(){
	
	menu();
	//write a function that calculates a factorial using a loop, and one that calculates it using recursion
	
	//write a function that calculates a value to an exponent. It should be able to handle any integer exponent(ie. positive and negative). You can use a loop, recursion or both for this.

//Write a fucntion that checks if a number is prime.
}


void menu() {
	int decision;
	cout<<endl<<"LOOPS AND RECURSION MENU"<<endl<<"======================================="<<endl;
	cout<<"(1) - calculate factorials."<<endl;
	cout<<"(2) - calculate values to any exponent."<<endl;
	cout<<"(3) - checks if a number is prime or not."<<endl;
	cout<<"(4) - Exit program."<<endl;
	cout<<"----------------------------------------"<<endl;
	cin>>decision;
	switch(decision) {
		case 1:
			int number;
			cout<<"CALCULATING FACTORIAL..."<<endl;
			cin>>number;
			cout<<number<<"! = "<<calculateFactorialByLoop(number)<<endl;
			break;
		case 2:
			cout<<"CALCULATING EXPONENT...";
			break;
		case 3:
			cout<<"CHECKING PRIME NUMBER...";
			break;
		default:
			cout<<"Goodbye!"<<endl;
			break;
	}	
}
int calculateFactorialByLoop(int number){
	int factorial = 1;
	for(int i = 1; i <= number; i++){
		factorial *= i;
	}
	return factorial;
}

int calculateFactorialByRecursion(int number){
	if(number == 1) {
		return number;
	} else {
		return number * calculateFactorialByRecursion(number-1);
	}
}
