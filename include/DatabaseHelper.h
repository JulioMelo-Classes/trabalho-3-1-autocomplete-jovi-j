#ifndef DBHELPER_H
#define DBHELPER_H
#include <string>
#include <fstream>
#include <vector>
#include <map>
#include <sstream>
class DatabaseHelper {
	private:
		std::fstream fileHandler;
		std::map<std::string, int> words_converted;

	public:
		bool initializeDB(std::string filepath);
		bool convertToVec();
		std::map<std::string, int>* getWords();

		DatabaseHelper(std::string filepath);
		DatabaseHelper();
		~DatabaseHelper();
};

#endif // DBHELPER_H