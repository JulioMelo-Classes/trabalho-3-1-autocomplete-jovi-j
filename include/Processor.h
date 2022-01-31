#ifndef PROCESSOR_H
#define PROCESSOR_H
#include "DatabaseHelper.h"
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <iostream>

class Processor{
	public:
		std::vector<std::string> autocomplete(std::string word, DatabaseHelper *dbHelper);
};

#endif // PROCESSOR_H