#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string pyramid_input;
	cout << "Enter the pyramid line: ";
	cin >> pyramid_input;
	
	cout << endl; // endl for extra space.
/*
 * Each time through the outer loop, a new string object called line2 will be instantiated.
 * 
 * The inner loop will enter and concat the current contets of the line variable into line2
 * in reverse order but not include the current line character.
 * 
 * the outer for loop will loop through the input and concatonate each
 * letter in the pyramid_input to the line variable one at a time per loop. 
 * 
 * the spaces variable, line variable and line2 variable
 * will be printed to the console.
 * 
 * finally the spaces variable will erase the first character in the string. 
 * since this is set to the length of the input plus 1, the final space will 
 * be erased at the last passing of the outer for loop.
 */
	string line; 
	string spaces (pyramid_input.length() + 1, ' '); // initailize a string of spaces the length of the input + 1.
	for(int i = 0; i < pyramid_input.length(); i++) {
		string line2;
		for(int j = line.length() - 1; j >= 0; j--) {
			line2 += line.at(j);
		}
		line += pyramid_input.at(i);
		cout << spaces + line + line2 << endl;
		spaces.erase(0, 1);
	}
	
	cout << endl;
	
	return 0;
}
