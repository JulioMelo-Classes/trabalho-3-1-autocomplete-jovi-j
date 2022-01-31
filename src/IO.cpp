#include "IO.h"

bool IO::wordInput(std::string *word){
	std::cout << ">>> Type a word and hit ENTER or <ctrl>+d to quit: ";
	std::getline(std::cin, *word);
	if (word->length() == 0 || std::cin.eof()) {
		return false;
	}
	return true;
}

void IO::showResults(std::vector<std::string> *results){
	if (results->size() == 0) {
		std::cout << "No results found." << std::endl;
		return;
	}
	else{
		std::cout << ">>> The matches are: " << std::endl;
		for (std::string result : *results) {
			std::cout << result << std::endl;
		}
		std::cout << std::endl << std::endl;
	}
}