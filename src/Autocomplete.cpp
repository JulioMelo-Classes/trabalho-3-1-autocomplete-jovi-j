#include "Autocomplete.h"
#include <istream>
#include <ostream>
#include <iostream>
#include <sstream>
#include <queue>

using namespace std;


void Autocomplete::iniciar(String caminhoDoArquivo) {
	Database::CarregarArquivo(caminhoDoArquivo);
	
}

string Autocomplete::getFile(string linha) {

}