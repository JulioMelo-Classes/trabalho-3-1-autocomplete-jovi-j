#ifndef PROCESSOR_H
#define PROCESSOR_H
#include "DatabaseHelper.h"
#include <string>
#include <vector>
class Processor {

	public:
		std::vector<std::string> autocomplete(std::string *word, DatabaseHelper *db);
		// não sei ainda como fazer então vou deixar void pra não ficar reclamando de erro
		void binarySearch(std::vector<std::string> *results, std::string *word);
};
#endif // PROCESSOR_H