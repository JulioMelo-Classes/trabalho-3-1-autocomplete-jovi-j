#ifndef DBHELPER_H
#define DBHELPER_H
#include <map>
#include <string>
#include <fstream>
class DatabaseHelper {
	private:
		std::fstream fileHandler;
		std::map<int, std::string> words_converted;

	public:
		bool initializeDB(std::string *filepath);
		bool convertToMap(std::fstream *file);
		std::map<int, std::string>* getWords();
};

#endif // DBHELPER_H