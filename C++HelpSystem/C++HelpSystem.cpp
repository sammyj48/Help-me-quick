/* Project - Creating a simple C++ Help System*/
#ifdef DEBUG
#pragma comment(lib, "StandaloneExitChoice.debug.lib")
#else
#pragma comment(lib, "StandaloneExitChoice.Release.lib")
#endif


#include "StandaloneExitChoice.h"
#include <iostream>
using namespace std;
using namespace stdln;

int main (){

	int ChooseOption;

	do {

		cout << "Help menu for 'if', 'else' and 'switch' statements: \n";
		cout << "\nPlease type:- \n";
		cout << "1 - for information on 'if' and 'else' statements: \n";
		cout << "2  - for information on 'switch' statements: \n";
		cout << "3 - for information on the 'for' loop ( the Floop!!): \n";
		cout << "4 - for information on the 'while' loop (the Woop!!): \n";
		cout << "5 - for information on the 'do-while' loop (the Doo-doo loop!!) \n";

		cin >> ChooseOption; 

	} while (ChooseOption < 1 || ChooseOption > 5);

	cout << "\n";

	switch (ChooseOption){
	
	case 1: 
		cout << "The 'if' statement lets you selectively execute part of a program.\n";
		cout << "If the conditional expression related to the 'if' is true, the statement (or block of statements) will be executed.\n";
		cout << "The 'else' statement lets you selectively execute another part of the program if the conditional expression\nrelated to the 'if' is false\n";
		cout << "It is written as follows:-\n";
		cout << "if (condition) statement;\n";
		cout << "else statement;\n";
		break;

	case 2:
		cout << "The 'switch' statement provides a multiway branch, enabling the program to select among several alternatives.\n";
		cout << "It is written as follows:-\n";
		cout << "switch (expression) {\n";
		cout << "    case constant\n";
		cout << "       statement sequence\n";
		cout << "       break;\n";
		cout << "}\n";
		break;

	case 3:
		cout << "In the 'for' loop (or the Floop, as it is better known in this house!), we use an INITIALISATION to set a loop \n";
		cout << "control variable to an initial value.  The loop will keep repeating and INCREMENT as long as the CONDITION is \n";
		cout << "true (nonzero).\n";
		cout << "It is written as follows:-\n";
		cout << "for(initialisation; condition; increment)\n";
		cout << "{\n";
		cout << "  statement sequence\n";
		cout << "}\n";
		cout << "\nYou can also create an infinite loop!! Just type:- \n";
		cout << "for (;;)\n";
		cout << "{\n";
		cout << "}\n";
		cout << "This loop will run for everrrrrrrrrrrrr!!!\n";
		break;

	case 4:
		cout << "The 'while' loop (or the Woop!) includes an EXPRESSION which defines the condition that controls the loop.\n";
		cout << "The STATEMENT (or block of statements) will be executed only when the condition is true.  When the condition\n";
		cout << "becomes false, the program control is resumed at the line of code that immediately follows the loop.\n";
		cout << "It is written as follows:- \n";
		cout << "while(expression) statement;\n";

	case 5:
		cout << "The 'do-while' loop (otherwise known as the Doo-doo loop, yes, stinky, we know!) tests the condition at the \n";
		cout << "bottom of the loop, rather than the top, meaning that it will always execute at least once.\n";
		cout << "The Doo-doo loop  executes as long as the conditional expression is true and is written as follows:- \n";
		cout << "do {\n";
		cout << "    statements\n";
		cout << "} while (condition)";

		
	}
	cout << "\n\n\nPlease type 'a' to choose again or 'e' to exit the help program: ";
	restartKey1 = 'a';
	restartKey2 = 'A';
	exitKey1 = 'e';
	exitKey2 = 'E';
	exitchoice(3);


}