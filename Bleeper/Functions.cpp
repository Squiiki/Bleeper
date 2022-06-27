#include <iostream>
#include <string>
#include <vector>
#include "Functions.h"

using namespace std;

//Replaces all the characters with asterisks
void Astereplace(string word, string& text, int i) {

	//Loop through the word size
	for (int k = 0; k < word.size(); k++) {

		//Replace the character with an asterisk
		text[i + k] = '*';
	}
}


void Bleep(string word, string& text) {

	//Loop through the paragraph string
	for (int i = 0; i < text.size(); i++) {

		//Reset the matched letters
		int match = 0;

		//Loop through the word string
		for (int j = 0; j < word.size(); j++) {

			//If the characters in the paragraph string match those of the word string
			if (text[i + j] == word[j]) {

				//Add 1 to the matched letters counter
				match++;
			}
			else {

				break;
			}
		}

		//If the matched letters count is equal to the size of the word, replace the corresponding characters with asterisk
		if (match == word.size()) {

			//Call the asterisk replacement function
			Astereplace(word, text, i);
		}
	}
}