#ifndef IO_H
#define IO_H
#include <string>
#include <iostream>
#include <vector>

class IO {

	public:
		bool wordInput(std::string *word);
		void showResults(std::vector<std::string> *results);
};

#endif // IO_H