#include <iostream>
using namespace std;

void menu();
void factorialMenu();
void menuRecursion();
int calculateFactorialByLoop(int number);
int calculateFactorialByRecursion(int number);
void checkPrime();


int main(){
	menu();
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
			//write a function that calculates a factorial using a loop, and one that calculates it using recursion
			factorialMenu();
			break;
		case 2:
			//write a function that calculates a value to an exponent. It should be able to handle any integer exponent(ie. positive and negative). You can use a loop, recursion or both for this.
			cout<<"CALCULATING EXPONENT...";
			break;
		case 3:
			//Write a fucntion that checks if a number is prime.
			checkPrime();
			menuRecursion();
			break;
		default:
			cout<<"Goodbye!"<<endl;
			break;
	}	
}

void menuRecursion(){
	char recursionDecision;
	cout<<"Process finished! Do you want to continue? (type y|n)"<<endl;
	cin>>recursionDecision;

	if (recursionDecision == 'y' || recursionDecision == 'Y') {
		menu();
	} else {
		cout<<"Goodbye!"<<endl;
	}
}

void factorialMenu() {
	char factorialDecision;
	int number;

	cout<<"FACTORIAL MENU"<<endl<<"=============="<<endl;
	cout<<"(r) Calculate factorial by recursion. "<<endl;
	cout<<"(l) Calculate factorial by loop."<<endl;
	cin>>factorialDecision;
	

	cout<<"Type a number to calculate the factorial: ";
	cin>>number;

	if(factorialDecision == 'r' || factorialDecision == 'R') {
		cout<<number<<"! = "<<calculateFactorialByRecursion(number)<<endl;
	}else {
		cout<<number<<"! = "<<calculateFactorialByLoop(number)<<endl;
	}
	menuRecursion();
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

void checkPrime(){
	int number;
	cout<<"Type a natural number to check if it's prime: ";
	cin>>number;
	
	if(number <= 0) {
		cout<<"Please...";
		checkPrime();

	} else if (number == 1) {
		cout<<"1 is prime by definition."<<endl
;
	} else if (number == 2) {
		cout<<"2 is a prime number."<<endl;

	} else {
		int count = 0;
		
		for (int i = 2; i < number; i++){
			if (number % i == 0){
				count++;
			}
		}
		if (count == 0) {
			cout<<number<<" is a prime number."<<endl;
		} else {
			cout<<number<<" is NOT a prime number."<<endl;
		}
	}
}
