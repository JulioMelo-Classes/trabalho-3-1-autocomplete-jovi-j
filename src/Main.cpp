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
	// Initialize the database using the argument as the filepath
	if (!dbHelper.initializeDB(string(argv[1]))) {
		cout << "Error: Could not initialize database, check your file." << endl;
		return 1;
	}
	IO io;
	Processor proc;
	string word;

	while(io.wordInput(&word)){
		vector<string> results = proc.autocomplete(&word, &dbHelper);
		io.showResults(&results);
	}

	return 0;
}