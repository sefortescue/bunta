#include <iostream>
#include <string>
#include <unistd.h>
#include <getopt.h>
#include "input/validateArgs.h"
#include "progression/progression.h"
#include "generation/treeSearch.h"
#include "output/printProgression.h"

using std::cout;
using std::cerr;
using std::string;

// global for error messages
string program_name;

int main(int argc, char *argv[]) {
	// store program name for error messages	
	program_name = argv[0];

	// option flags
	bool sFlag = false;
	bool bFlag = false;
	bool iFlag = false;
	bool nFlag = false;

	// option args
	string sArg;
	string bArg;
	string iArg;
	string nArg;
	
	// varibles to store option characters for use and error messages
	int opt;
	char optOut;

	// print my own error messages for options
	opterr = 0;

	// while there are still remaining options, set flags and store any arguments as strings
	while ((opt = getopt(argc,argv,"+:s:b:i:n:")) != -1) {
		switch (opt) {
		case '?':
			optOut = optopt;
			cerr << program_name << ": unknown option given: -" << optOut << "\n";
			return 1;
		case ':':
			optOut = optopt;
			cerr << program_name << ": missing option argument at: -" << optOut << "\n";
			return 1;
		case 's':
			if (sFlag) {
				cerr << program_name << ": -s given more than once, arg use is ambiguous." << "\n";
				return 1;
			}
			sFlag = true;
			sArg = optarg;
			break;
		case 'b':
			if (bFlag) {
				cerr << program_name << ": -b given more than once, arg use is ambiguous." << "\n";
				return 1;
			}
			bFlag = true;
			bArg = optarg;
			break;
		case 'i':
			if (iFlag) {
				cerr << program_name << ": -i given more than once, arg use is ambiguous." << "\n";
				return 1;
			}
			iFlag = true;
			iArg = optarg;
			break;
		case 'n':
			if (nFlag) {
				cerr << program_name << ": -n given more than once, arg use is ambiguous." << "\n";
				return 1;
			}
			nFlag = true;
			nArg = optarg;
			break;
		}
	}

	// RUN CHECKS ON OPTION ARGUMENTS HERE


	return 0;
}
