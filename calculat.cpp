#include <iostream>
/* Let's write a calculator program */
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
 std::cout << myNumber << additionCharacter << myOtherNumber << "= " << myNumber + myOtherNumber << "\n";
 std::cout << myNumber << subtractionCharacter << myOtherNumber << "= "<< myNumber - myOtherNumber << "\n";
 std::cout << myNumber << multiplicationCharacter << myOtherNumber << "= " << myNumber * myOtherNumber << "\n";
 std::cout << myNumber << divisionCharacter << myOtherNumber << "= "<< myNumber / myOtherNumber << "\n";
}