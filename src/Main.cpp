#include "DatabaseHelper.h"
#include "IO.h"
#include "Processor.h"

using namespace std;

int main(int argc, char ** argv) {
	if (argc != 2) {
		cout << "Usage: ./autocomplete <path-to-dictionary-file>" << endl;
		return 1;
	}

	DatabaseHelper dbHelper;
	IO io;
	Processor proc;
	
	if (!dbHelper.initializeDB(argv[1])) {
		cout << "Error: Could not open dictionary file." << endl;
		return 1;
	}

	string word;

	while(io.wordInput(&word)){
		vector<string> results = proc.autocomplete(&word, &dbHelper);
		io.showResults(&results);
	}

	return 0;
}