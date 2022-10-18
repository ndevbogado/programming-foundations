//create some of your own functions. Try out using different return types (such as void), as well as different combinations of parameters.
//Try removing the prototypes from the example program and see what can do to fix the error, other than putting the protoypes back in.

#include <iostream>
#include <string>

using namespace std;
void dataProcessor(string firstName, string lastName);

int main (){
//create a program, using functions for each of the main tasks. The program should prompt the user for information, process the data, and display the result.
	string fname;
	string lname;
	
	cout<<"Enter your first Name: ";
	cin>>fname;
	cout<<"Enter your last Name: ";
	cin>>lname;
	
	dataProcessor(fname, lname);
	return 0;
}

void dataProcessor(string firstName, string lastName){
	cout<<endl<<"Hello there "<<firstName<<" "<<lastName<<" by function!";
}
