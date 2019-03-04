//Licence GPL v3
//Vesion 1.0

#include <iostream>
using namespace std;

int main() {
	
	int low_limit {};
	int high_limit {};
	cout << "Enter low_limit and high_limit separated by a whitespace" << endl;
	cout << ":";
	cin >> low_limit >> high_limit;
	
	if (low_limit < high_limit){
		for (int number {high_limit}; number >= low_limit && number > 1; --number ){
  // Intoducing an external variable to indicate weather the number tests as prime in the second loop  
  // Defaulting each number as prime means that  1 and 2 will be prime numbers without any tests
			bool prime {1};
			for (int count {2}; count < (number - 1); count++){
   // Designating number as not prime and stopping the loop is divisible by any other number <1
				if (number % count == 0) {
					prime = 0;
					break;
				}	
			}
			if (prime == 1 )
					cout << number << endl;	
		}
	}else{
		cout << "\nThe numbers you have entred are out of limits" << endl;
	}

	return 0;	
}
