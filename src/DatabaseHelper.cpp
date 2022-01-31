#include "DatabaseHelper.h"

DatabaseHelper::DatabaseHelper(std::string filepath){
	this->initializeDB(filepath);
}

DatabaseHelper::DatabaseHelper(){
}

DatabaseHelper::~DatabaseHelper(){
	this->fileHandler.close();
}

std::map<std::string, int>* DatabaseHelper::getWords(){
	return &this->words_converted;
}

bool DatabaseHelper::initializeDB(std::string filepath){
	this->fileHandler.open(filepath);
	if(!this->fileHandler.is_open()){
		return false;
	}
	if(this->convertToVec())
		return true;
	else
		return false;
}

bool DatabaseHelper::convertToVec(){
	std::string line;
	while(std::getline(this->fileHandler, line)){
		std::stringstream ss(line);
		std::string word;
		int count;
		ss >> count;
		ss >> word;
		this->words_converted.insert(std::make_pair(word, count));
	}
	return true;
}