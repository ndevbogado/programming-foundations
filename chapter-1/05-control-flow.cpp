#include<iostream>

using namespace std;

void evenOrOdd(int number);
bool isLeap(int year);

int main(){
	int myNumber;
	//write logic to detect if a number is even or odd.
	cout<<"This program determines whereas a numbers is even or odd. Type a number: ";
	cin>>myNumber;
	evenOrOdd(myNumber);
	
	//write a Boolean function to detect if a given year is a leap year: every fourth year is a leap one, unless it is a century, but it is still a leap year if it is a fourth century. For example, year 4 is leap, year 100 is not and year 400 is.
	int myYear;
	bool query;
	cout<<"This program determines whereas a year is leap or not. Type a year: ";
	cin>>myYear;
	query = isLeap(myYear);
	if (query) {
		cout<<myYear<<" is leap"<<endl;
	} else {
		cout<<myYear<<" is not leap"<<endl;
	}
}

void evenOrOdd(int number) {
	if (number % 2 == 0){
		cout<<number<<" is even."<<endl;
	} else {
		cout<<number<<" is odd."<<endl;
	}
}

bool isLeap(int year) {
	if (year % 400 == 0) {
		return true;
	} else if (year % 100 == 0) {
		return false;
	} else if (year % 4 == 0 ) {
		return true;
	} else {
		return false;
	}
}
