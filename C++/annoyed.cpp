#include <iostream>
//Includez iostream library
using namespace std;
//Std namespace

int main() {
	string inp;
	int times;
	//Objects created
	cout << "Enter string: ";
	cin >> inp;
	//Takes strung input
	cout << "Enter times: ";
	cin >> times;
	//Takes number of times to print input
	for (int i=0;i!=times;i++) {
		/*Variable i initaialised by 0, i
		 should not be equal to times and i is
		  incremented by 1*/
		cout << inp << endl;
		//Prints the input string
	}
	return 0;
	//Returns 0 as succes
}
