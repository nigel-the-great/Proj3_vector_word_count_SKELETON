//============================================================================
// Name        : array functions cpp
// Author      : Nigel
// Description : vector sort
//============================================================================

#include "../includes/array_functions.h"
#include "../includes/constants.h"
#include "../includes/utilities.h"

using namespace std;

void clear(std::vector<constants::entry>  &entries){
	std::fill(vector.begin(), vector.end(), 0);
}

int getSize(std::vector<constants::entry>  &entries){
	return entry
}

int getNumbOccurAt(std::vector<constants::entry>  &entries,int i){
	if(i > vector[i]){
		return vector[-1]
	}
	else
		for(int i = 0; i < vector[-1]; i++){
			vector[i]
	}

bool processFile(std::vector<constants::entry>  &entries,std::fstream &myfstream){
	if(!myfstream.is_open()){
		return false
	}
	else
		processLine
}

void processLine(std::vector<constants::entry>  &entries,std::string &myString){
	stringstream ss(myString);
	string tempToken
	
	while (getline(ss, tempToken, constants::CHAR_TO_SEARCH_FOR)){
		processToken(entries, tempToken);
	}
}

void processToken(std::vector<constants::entry>  &entries,std::string &token){
	strip_unwanted_chars(std::string &mystring);
	
	entry.number_occurences = 1;
	std::string line;
	while(std::getline(is, line)) ++entry.number_occurences;
			
}

void sort(std::vector<constants::entry>  &entries, constants::sortOrder so){
	for(size_v i = 0; i != vector[-1]; ++i){
		sort(vector)
	}
}
