//============================================================================
// Name        : fileio cpp
// Author      : Nigel
// Description : vector sort
//============================================================================

#include "../includes/fileio.h"
#include "../includes/constants.h"

using namespace std;

bool openFile(std::fstream& myfile, const std::string& myFileName,
		std::ios_base::openmode mode = std::ios_base::in){
	ifstream myFile;
	myFile.open(myFileName;);
	if(!myFile) {
		return false;
}
else
return true
}
/*iff myfile is open then close it*/
void closeFile(std::fstream& myfile){
	if(myfile.is_open;()){
		return myfile.close()
}
}

int writetoFile(std::vector<constants::entry>  &entries, const std::string &outputfilename){
	ofstream myOfile;
	myOfile.open(outputfilename);
	if(!myOfile;){
		return FAIL_FILE_DID_NOT_OPEN
}
	if(myOfile==0;){
		return FAIL_NO_ARRAY_DATA
}
	if(myOfile.is_open;()){
		return myOfile.close()
return SUCCESS
	}
}
