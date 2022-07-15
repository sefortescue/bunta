#include <iostream>
#include <unistd.h>
#include <getopt.h>
#include <string>

using std::cout;
using std::cerr;
using std::string;

string program_name;

int main(int argc, char *argv[]) {
	
	program_name = argv[0];
	
	//options
	
	int opt;	
	char opOut;
	opterr = 0;
	
	while ((opt = getopt(argc,argv,"+:r:fsc:v")) != -1) {
		switch (opt) {
		case '?':
			opOut = optopt;
			cerr << program_name << ": unknown option given: -" << opOut << "\n";
			return 1;
			break;
		case ':':
			opOut = optopt;
			cerr << program_name << ": missing option argument at: -" << opOut << "\n";
			return 2;
			break;
		}
	}
	
	return 0;
}
