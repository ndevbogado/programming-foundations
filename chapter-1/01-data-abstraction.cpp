#include <iostream>
using namespace std;

int main(){
	int userInt;
	double userDouble;
	char userChar;
	
	cout<<"Type any integer"<<endl;
	cin>>userInt;
	
	cout<<"Type any decimal (remember decimal notation: 1.2 )"<<endl;
	cin>>userDouble;

	cout<<"Type any character"<<endl;
	cin>>userChar;

	cout<<"User Integer: "<<userInt<<endl;
	cout<<"User Decimal: "<<userDouble<<endl;
	cout<<"User Character: "<<userChar<<endl;

	return 0;
}

