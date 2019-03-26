#include <iostream>
 
 using namespace std;
 
 int main ()
 {
 	float a;
 	float b;
 	float BEFORE;
 	float AFTER;
 	float ACCESSORIES;
 	float SCHOOLSUPPLIES;
 	float SAVINGSME;
 	float SAVINGSPARENTS;
 	float REMAINDER;
 	
 	cout << "Enter your pay rate for an hour. \n";
 	cin >> a;
 	
 	cout << "Enter the number of hours you work in a week. \n";
 	cin >> b;
 	
 	BEFORE = a * b;
 	AFTER = BEFORE * 0.86;
 	ACCESSORIES = AFTER * 0.10;
 	SCHOOLSUPPLIES = (AFTER - ACCESSORIES) * 0.01;
	REMAINDER = AFTER - ACCESSORIES - SCHOOLSUPPLIES; 
	SAVINGSME = REMAINDER / 4;
	SAVINGSPARENTS = SAVINGSME * 0.5;
	
	
	
 	cout << "Your total salary before taxes is $" << BEFORE << "\n";
 	cout << "Your total salary after taxes is $" << AFTER << "\n";
 	cout << "Your accessories expenditures is $" << ACCESSORIES << "\n";
 	cout << "Your school supplies expenditures is $" << SCHOOLSUPPLIES << "\n";
 	cout << "Your saving bonds expenditures is $" << SAVINGSME << "\n";
 	cout << "Your parents' saving bonds expenditures for you is $" << SAVINGSPARENTS << "\n" << endl;
 	
 	return 0;
 }
