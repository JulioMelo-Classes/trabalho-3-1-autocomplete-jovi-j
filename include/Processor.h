#ifndef PROCESSOR_H
#define PROCESSOR_H
#include "DatabaseHelper.h"
#include <vector>
#include <string>
#include <map>

class Processor{
	public:
		std::vector<std::string> autocomplete(std::string *word, DatabaseHelper *dbHelper);
		int binarySearch(DatabaseHelper *dbHelper, std::string *word);
};

#endif // PROCESSOR_H