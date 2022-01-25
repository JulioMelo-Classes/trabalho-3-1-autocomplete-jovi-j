#include "DatabaseHelper.h"

DatabaseHelper::DatabaseHelper(std::string filepath){
	this->initializeDB(filepath);
}

DatabaseHelper::DatabaseHelper(){
}

DatabaseHelper::~DatabaseHelper(){
	this->fileHandler.close();
}

bool DatabaseHelper::initializeDB(std::string filepath){
	this->fileHandler.open(filepath);
	if(!this->fileHandler.is_open()){
		return false;
	}
	return true;
}

// retrives the words from the file and converts them to a map, the int is the occurence of the word, the string is the word itself.
bool DatabaseHelper::convertToMap(std::fstream *file){
	std::string word;
	int occurence;
	while(file->good()){
		*file >> occurence;
		*file >> word;
		this->words_converted.insert(std::pair<int, std::string>(occurence, word));
	}
	return true;
}


std::map<int, std::string>* DatabaseHelper::getWords(){
	return &this->words_converted;
}