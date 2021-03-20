#include <iostream>
#include<cstdlib>
#include<cstdio>
#include<string>
#include <fstream>
using namespace std;
int setwidth=0;
int setheight=0;
int debugmode=0;

int command=0;

char codeline[50];
char codelinearray[1000][50];

char filelocation[1000];
int savelocationtemp;

#include <iostream>

void initialize() {
	cout << "Set width" << endl;
	cin >> setwidth;
	cout << "Set height" << endl;
	cin >> setheight;
	cout << "To enable Debug mode, press 1" << endl;
	cin >> debugmode;
}


/*
* Debugmode Example
if (debugmode == 1) {
}
*/

//Main Routine

//(C)ode
void code()
{
	if (debugmode == 1) {
		cout << "Code" << " is running" << endl;
		cout << "Run in main routine" << endl;
	}
	cout << "Line Number :";
	int linenumber=0;
	int linecount=0;
	cin >> linenumber;
	cout << endl;

	//initialize
	linecount = 0;
	while (1) {
		codeline[linecount] = 0;
		codelinearray[linenumber][linecount] = 0;
		linecount++;
		if (linecount == 50) {
			break;
		}
	}

	//copy
	linecount = 0;
    cout << "Input line: ";
	cin >> codeline;
	while (1) {
		codelinearray[linenumber][linecount] = codeline[linecount];
		linecount++;
		if (linecount == 50) {
			return;
		}
	}
}
//(L)ine
void line(void)
{
	if (debugmode == 1) {
		cout << "Line" << " is running" << endl;
		cout << "Run in main routine" << endl;
	}
	int linenumber=0;
	int linecount = 0;
	cout << "Line Number: ";
	cin >> linenumber;
	cout << endl;
	while (true) {
		cout << codelinearray[linenumber][linecount];
		linecount++;
		if (codelinearray[linenumber][linecount] == 39) {
			linecount++;
			cout << codelinearray[linenumber][linecount];
			cout << endl;
			return;
		}
		if (linecount == 50) {
			cout << endl;
			return;
		}
	}
}
//(E)xit
void exits(void)
{
	if (debugmode == 1) {
		cout << "Exit" << " is running" << endl;
		cout << "Run in main routine" << endl;
	}
	return;
}
//(R)un
void run(void)
{
	if (debugmode == 1) {
		cout << "Run" << " is running" << endl;
		cout << "Run in main routine" << endl;
	}


}
//(S)ave
void save(void)
{
	if (debugmode == 1) {
		cout << "Save" << " is running" << endl;
		cout << "Run in main routine" << endl;
	}
	cout << "FIle name to load: AAA.txt" << endl << "File must be in the same location" << endl;
	cin >> filelocation;
	ofstream myfile(filelocation);
	if (myfile.is_open()) {
		savelocationtemp = 0;
		int linecount = 0;
		while (true) {
			myfile << codelinearray[linecount][savelocationtemp];
			savelocationtemp++;
			if (savelocationtemp ==50) {
				savelocationtemp = 0;
				linecount++;
				myfile << "\n";
			}
			if (linecount == 1001) {
				cout << "EOL" << endl;
				break;
			}
		}
	}
	else {
		cout << "UNABLE" << endl;
	}
}
//L(o)ad
void load(void)
{
	if (debugmode == 1) {
		cout << "Load" << " is running" << endl;
		cout << "Run in main routine" << endl;
	}
	cout << "FIle name to load: AAA.txt" << endl << "File must be in the same location" << endl;
	cin >> filelocation;
	ifstream myfile(filelocation);
	if (myfile.is_open()) {
		int linecount = 0;
		while (true) {
			myfile.getline(codelinearray[linecount], 51);
			linecount++;
			if (linecount == 1001) {
				break;
			}
		}
	}
}

///////////////////////////////////

//Sub-routine

void print()
{
	if (debugmode == 1) {
		cout << "" << " is running" << endl;
		cout << "Run in sub routine" << endl;
	}
}
void poke()
{
	if (debugmode == 1) {
		cout << "" << " is running" << endl;
		cout << "Run in sub routine" << endl;
	}
}
void ifI()
{
	if (debugmode == 1) {
		cout << "" << " is running" << endl;
		cout << "Run in sub routine" << endl;
	}
}
void pokemem()
{
	if (debugmode == 1) {
		cout << "" << " is running" << endl;
		cout << "Run in sub routine" << endl;
	}
}
void plus()
{
	if (debugmode == 1) {
		cout << "" << " is running" << endl;
		cout << "Run in sub routine" << endl;
	}
}
void minus()
{
	if (debugmode == 1) {
		cout << "" << " is running" << endl;
		cout << "Run in sub routine" << endl;
	}
}
void multiply()
{
	if (debugmode == 1) {
		cout << "" << " is running" << endl;
		cout << "Run in sub routine" << endl;
	}
}
void divide()
{
	if (debugmode == 1) {
		cout << "" << " is running" << endl;
		cout << "Run in sub routine" << endl;
	}
}
void save_sub()
{
	if (debugmode == 1) {
		cout << "" << " is running" << endl;
		cout << "Run in sub routine" << endl;
	}
}
void load_sub()
{
	if (debugmode == 1) {
		cout << "" << " is running" << endl;
		cout << "Run in sub routine" << endl;
	}
}



int main()
{
	initialize();
	while (true){
		cout << " Select. (C)ode, (L)ine, (E)xit, (R)un, (S)ave, l(O)ad" << endl;
		char command = 0;
		int temp = 0;
		cin >> command;
		if (command == 67) {
			if (debugmode == 1) {
				cout << "Selected command: " << "Code" << endl;
			}
			code();
			
		}
		else if (command == 76) {
			if (debugmode == 1) {
				cout << "Selected command: " << "Line" << endl;
			}
			line();
		}
		else if (command == 69) {
			if (debugmode == 1) {
				cout << "Selected command: " << "Exits" << endl;
			}
			exits();
			return 0;
		}
		else if (command == 82) {
			if (debugmode == 1) {
				cout << "Selected command: " << "Run" << endl;
			}
			run();
		}
		else if (command == 83) {
			if (debugmode == 1) {
				cout << "Selected command: " << "Save" << endl;
			}
			save();
		}
		else if (command == 79) {
			if (debugmode == 1) {
				cout << "Selected command: " << "Load" << endl;
			}
			load();
		}
		else if (command == 0) {
			cin >> temp;
		}
	}
}

