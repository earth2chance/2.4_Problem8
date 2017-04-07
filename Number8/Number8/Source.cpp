//Chance Daily//
//Assignment 2.4, #8, 4-5-2017//

#include <iostream>

int main(){

	double grossPay, bonus, savings; 

	std::cout << "What was your gross pay for the year? ";
	std::cin >> grossPay;

	std::cout << "How much was your bonus this year? (Must be more than $100) ";
	std::cin >> bonus;

	savings = (grossPay *.2) + 100;
	

	std::cout << "You save %20 of your gross pay plus $100 of your bonus, therefore you have $" 
		<< savings << " in your savings account" << std::endl;

}