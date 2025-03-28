#include <iostream>

// a function that ask user to input name
void name() {
    std::string name;
    std::cout << "What's your name? ";
    std::cin >> name;
    std::cout << "Hello " << name << std::endl;
}

// a function that ask user to input two numbers
void twonum(int &num1, int &num2) {
    std::cout << "Enter first num: ";
    std::cin >> num1;
    std::cout << "Enter second num: ";
    std::cin >> num2;
}

// a function that add num1 and num 2
void add(int num1, int num2) {
    int sum = num1 + num2;
    std::cout << "The sum of two numbers is: " << sum << std::endl;
}

// a function that subract num1 and num2
void sub(int num1, int num2) {
    int diff = num1 - num2;
    std::cout << "The difference of two numbers is: " << diff << std::endl;
}

// a functuon that multiply the num1 and num2
void mult(int num1, int num2) {
    int prod = num1 * num2;
    std::cout << "The product of two numbers is: " << prod << std::endl;
}

// a function that divide the num1 and num2
void divi(int num1, int num2) {
    int quot = num1 / num2; 
    std::cout << "The quotient of two numbers is: " << quot << std::endl;
}

// a function that remainder of num1 and num2
void modu(int num1, int num2) {
    int mod = num1 % num2; 
    std::cout << "The modulus of two numbers is: " << mod << std::endl;
}

int main() {
    // call all the function in main function to run the code
    name();
    
    
    int num1, num2;
    twonum(num1, num2);
    
    add(num1, num2);
    sub(num1, num2);
    mult(num1, num2);
    divi(num1, num2);
    modu(num1, num2);
    
    return 0;
}
