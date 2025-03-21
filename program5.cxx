#include <iostream>
using namespace std;

int main(){
	// declaring variable without assignibg value
	string name;
	int num1, num2, result;
	
	// asking user to input name
	cout<<" What's your name? ";
	cin>>name;
	cout << "Hello " << name<< "!" << endl;
	
	// asking user to input two nymbers
	cout << " Enter two numbers: ";
	cin>> num1 >>num2;
	
	// addition of num1 and num2
	result = num1 + num2;
	cout << " The sum of two numbers: " << result << endl;
	
	// subraction of num1 and num2
	result = num1 - num2;
	cout << " The difference of two numbers: " << result << endl;
	
	// multiplication of num1 and nym2
	result = num1 * num2;
	cout << " The product of two numbers: " << result << endl;
	
	// division of num1 and num2
	result = num1 / num2;
	cout << " The quotient of two numbers: " << result << endl;
	
	// remainder of num1 and num2
	result = num1 % num2;
	cout << " The modulus of two numbers: " << result << endl;
	
	
	
		return 0;
	}