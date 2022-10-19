#include<iostream>

using namespace std;

void evenOrOdd(int number);

int main(){
	int myNumber;
	//write logic to detect if a number is even or odd.
	cout<<"This program determines whereas a numbers is even or odd. Type a number: ";
	cin>>myNumber;
	evenOrOdd(myNumber);
}

void evenOrOdd(int number) {
	if (number % 2 == 0){
		cout<<number<<" is even."<<endl;
	} else {
		cout<<number<<" is odd."<<endl;
	}
}
