 #include "Processor.h"

// function to find if a word is a prefix of another word
bool isPrefix(std::string word, std::string prefix) {
	if (word.length() < prefix.length()) {
		return false;
	}
	for (int i = 0; i < prefix.length(); i++) {
		if (word[i] != prefix[i]) {
			return false;
		}
	}
	return true;
}


std::vector<std::string> Processor::autocomplete(std::string word, DatabaseHelper *dbhelper){
	std::map<std::string, int>::iterator lower, upper;
	std::map<std::string, int> * words = dbhelper->getWords();

	lower = std::lower_bound(words->begin(), words->end(), word, [](const std::pair<std::string, int> & a, const std::string & b) {
		return isPrefix(a.first, b) && a.first <= b;
	});
	upper = std::upper_bound(lower, words->end(), word, [](const std::string & a, const std::pair<std::string, int> & b) {
		return isPrefix(a, b.first) || a < b.first;
	});

	std::vector<std::string> result;
	for (std::map<std::string, int>::iterator it = lower; it != upper; it++) {
		result.push_back(it->first);
	}
	return result;
}
