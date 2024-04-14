#include <iostream>
#include <ctime>
#include <string>
#include <windows.h> 
#include <stdlib.h>

using namespace std;

struct infoAboutStudent {
	string fullName;
	int studBook;
	int numGroup;
	int firstMark;
	int secondMark;
	int thirdMark;
};

bool isInt(string);
bool isValidName(string);
infoAboutStudent fillStruct();
int getStudentInfo(infoAboutStudent[], int, int);