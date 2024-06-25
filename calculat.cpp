#include <iostream>
/* Let's write a calculator program for real numbers with variables
 that takes numbers from user input using functions for modularity */
float addTwoNumbers(float operand1, float operand2) {
 return operand1 + operand2;
}
float subtractTwoNumbers(float operand1, float operand2) {
 float difference = operand1 - operand2;
 return difference;
}
void multiplyTwoNumbers(float operand1, float operand2, float &product) {
 product = operand1 * operand2;
}
bool divideTwoNumbers(float operand1, float operand2, float &quotient) {
 quotient = operand1 / operand2;
 return false;
}
int main()
{
 // Ask the user to give us two numbers for our operands
 float myNumber, myOtherNumber;
 std::cout << "Please type a number and press enter: ";
 std::cin >> myNumber; // Wait for user to enter a first operand
 // Ask the user for our second operand and assign it to "myOtherNumber"
 std::cout << "Please type another number and press enter: "; // Second operand
 std::cin >> myOtherNumber;
 char additionCharacter = '+'; // Character, for plus
 char subtractionCharacter = '-'; // Character, for minus
 char multiplicationCharacter = '*'; // Character, for times
 char divisionCharacter = '/'; // Character, for division
 // Perform all operations and output result to screen
 std::cout << myNumber << additionCharacter << myOtherNumber << "= " << addTwoNumbers(myNumber,myOtherNumber) << "\n";
 std::cout << myNumber << subtractionCharacter << myOtherNumber << "= " << subtractTwoNumbers(myNumber,myOtherNumber) << "\n";
 float productNumber; // local variable only usable in main function
 multiplyTwoNumbers(myNumber,myOtherNumber,productNumber); // function call
 std::cout << myNumber << multiplicationCharacter << myOtherNumber << "= "<< productNumber << "\n";
 std::cout << myNumber << divisionCharacter << myOtherNumber << "= "<< myNumber / myOtherNumber << "\n";
 float quotient; // NOT the same variable as quotient in function definition
 divideTwoNumbers(myNumber,myOtherNumber,quotient); // function call
 std::cout << myNumber << divisionCharacter << myOtherNumber << "= "<< quotient << "\n";
}