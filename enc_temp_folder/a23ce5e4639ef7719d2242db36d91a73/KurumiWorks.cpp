#include <iostream>
#include<cstdlib>
#include<cstdio>
#include<string>
#include <fstream>

using namespace std;
int width=0;
int height=0;
int debugmode=0;
int temp1 = 0;
int temp2 = 0;
int temp3 = 0;
int command=0;
int maximumcodeline = 30;
char codeline[50];
char codelinearray[1000][30];
char memory[1000000];
char memorychar[1000000];
int memorysize = 1000000;
char filelocation[1000];
int savelocationtemp;
int linecountglobal = 0;


void initialize() {
	cout << "Set width" << endl;
	cin >> width;
	cout << "Set height" << endl;
	cin >> height;
	cout << "To enable Debug mode, press 1" << endl;
	cin >> debugmode;
	int a = 0;
	if (debugmode == 1) {
		cout << "MEMORY CLEAR" << endl;
	}
	while (true) {
		memory[a] = 0;
		if (a == 999999) {
			break;
		}
		a++;
	}
	a = 0;
	if (debugmode == 1) {
		cout << "MEMORYCHAR CLEAR" << endl;
	}
	while (true) {
		memorychar[a] = 0;
		if (a == 999999) {
			break;
		}
		a++;
	}
	a = 0;
	if (debugmode == 1) {
		cout << "CODELINE CLEAR" << endl;
	}
	while (true) {
		codeline[a] = 0;
		if (a == 49) {
			break;
		}
		a++;
	}
	a = 0;
	return;
}

void print()
{
	if (debugmode == 1) {
		cout << "Print" << " is running" << endl;
		cout << "Run in sub routine" << endl;
	}
	int linecount = 0;
	int temp = 0;
	while (true) {
		
		if (linecount == (width) * (height))
		{
			cout << endl;
			break;
		}
		if (temp == width)
		{
			cout << endl;
			temp = 0;
		}
		cout << (memory[linecount]);
		linecount++;
		temp++;
	}
	linecount++;
	return;
}
void poke()
{
	if (debugmode == 1) {
		cout << "Poke" << " is running" << endl;
		cout << "Run in sub routine" << endl;
	}
	char Original = 0;
	int pokey = 0;
	int linecount = linecountglobal;
	Original = (codelinearray[linecountglobal][5]);
	pokey = pokey + 100000 * ((int)(codelinearray[linecountglobal][7])-48);
	pokey = pokey + 10000* ((int)(codelinearray[linecountglobal][8]) -48);
	pokey = pokey + 1000 * ((int)(codelinearray[linecountglobal][9]) -48);
	pokey = pokey + 100 * ((int)(codelinearray[linecountglobal][10]) -48);
	pokey = pokey + 10 * ((int)(codelinearray[linecountglobal][11])-48);
	pokey = pokey + 1 * ((int)(codelinearray[linecountglobal][12]) -48);
	memory[pokey] = 0;
	memory[pokey] = Original;
	return;
}
void ifI()
{
	if (debugmode == 1) {
		cout << "IfI" << " is running" << endl;
		cout << "Run in sub routine" << endl;
	}
	int linecount = linecountglobal;
	int iftruegoto = 0;
	int iffalsegoto = 0;
	int baseline = 0;
	char basevalue = 0;
	basevalue = (codelinearray[linecount][3]);
	baseline += 100000 * ((int)(codelinearray[linecount][5]) - 48);
	baseline += 10000 * ((int)(codelinearray[linecount][6]) - 48);
	baseline += 1000 * ((int)(codelinearray[linecount][7]) - 48);
	baseline += 100 * ((int)(codelinearray[linecount][8]) - 48);
	baseline += 10 * ((int)(codelinearray[linecount][9]) - 48);
	baseline += 1 * ((int)(codelinearray[linecount][10]) - 48);
	iftruegoto += 1000 * ((int)(codelinearray[linecount][13]) - 48);
	iftruegoto += 100 * ((int)(codelinearray[linecount][14]) - 48);
	iftruegoto += 10 * ((int)(codelinearray[linecount][15]) - 48);
	iftruegoto += 1 * ((int)(codelinearray[linecount][16]) - 48);
	iffalsegoto += 1000 * ((int)(codelinearray[linecount][18]) - 48);
	iffalsegoto += 100 * ((int)(codelinearray[linecount][19]) - 48);
	iffalsegoto += 10 * ((int)(codelinearray[linecount][20]) - 48);
	iffalsegoto += 1 * ((int)(codelinearray[linecount][21]) - 48);
	if (memory[baseline] == basevalue)
	{
		linecountglobal = iftruegoto-1;
	}
	else
	{
		linecountglobal = iffalsegoto-1;
	}
	if (debugmode == 1) {
		cout << "Linecount changed to :" << linecountglobal << endl;
	}
	return;
}
void plus_()
{
	if (debugmode == 1) {
		cout << "Plus" << " is running" << endl;
		cout << "Run in sub routine" << endl;
	}
	int calculationlocation0 = 0;
	int calculationlocation1 = 0;
	int calculationtemp0 = 0;
	int calculationtemp1 = 0;
	int calculationfinal = 0;
	int linecount = linecountglobal;
	calculationlocation0 += 100000 * ((int)(codelinearray[linecount][5]) - 48);
	calculationlocation0 += 10000 * ((int)(codelinearray[linecount][6]) - 48);
	calculationlocation0 += 1000 * ((int)(codelinearray[linecount][7]) - 48);
	calculationlocation0 += 100 * ((int)(codelinearray[linecount][8]) - 48);
	calculationlocation0 += 10 * ((int)(codelinearray[linecount][9]) - 48);
	calculationlocation0 += 1 * ((int)(codelinearray[linecount][10]) - 48);
	calculationlocation1 += 100000 * ((int)(codelinearray[linecount][12]) - 48);
	calculationlocation1 += 10000 * ((int)(codelinearray[linecount][13]) - 48);
	calculationlocation1 += 1000 * ((int)(codelinearray[linecount][14]) - 48);
	calculationlocation1 += 100 * ((int)(codelinearray[linecount][15]) - 48);
	calculationlocation1 += 10 * ((int)(codelinearray[linecount][16]) - 48);
	calculationlocation1 += 1 * ((int)(codelinearray[linecount][17]) - 48);
	calculationtemp0 = memory[calculationlocation0];
	calculationtemp1 = memory[calculationlocation1];
	calculationfinal = calculationtemp0 + calculationtemp1;
	memory[calculationlocation0] = (char)(calculationfinal);
	return;
}
void minus_()
{
	if (debugmode == 1) {
		cout << "Minus" << " is running" << endl;
		cout << "Run in sub routine" << endl;
	}
	int calculationlocation0 = 0;
	int calculationlocation1 = 0;
	int calculationtemp0 = 0;
	int calculationtemp1 = 0;
	int calculationfinal = 0;
	int linecount = linecountglobal;
	calculationlocation0 += 100000 * ((int)(codelinearray[linecount][6]) - 48);
	calculationlocation0 += 10000 * ((int)(codelinearray[linecount][7]) - 48);
	calculationlocation0 += 1000 * ((int)(codelinearray[linecount][8]) - 48);
	calculationlocation0 += 100 * ((int)(codelinearray[linecount][9]) - 48);
	calculationlocation0 += 10 * ((int)(codelinearray[linecount][10]) - 48);
	calculationlocation0 += 1 * ((int)(codelinearray[linecount][11]) - 48);
	calculationlocation1 += 100000 * ((int)(codelinearray[linecount][13]) - 48);
	calculationlocation1 += 10000 * ((int)(codelinearray[linecount][14]) - 48);
	calculationlocation1 += 1000 * ((int)(codelinearray[linecount][15]) - 48);
	calculationlocation1 += 100 * ((int)(codelinearray[linecount][16]) - 48);
	calculationlocation1 += 10 * ((int)(codelinearray[linecount][17]) - 48);
	calculationlocation1 += 1 * ((int)(codelinearray[linecount][18]) - 48);
	calculationtemp0 = memory[calculationlocation0];
	calculationtemp1 = memory[calculationlocation1];
	calculationfinal = calculationtemp0 - calculationtemp1;
	memory[calculationlocation0] = (char)(calculationfinal);
	return;
}
void multiply()
{
	if (debugmode == 1) {
		cout << "Multiply" << " is running" << endl;
		cout << "Run in sub routine" << endl;
	}
	int calculationlocation0 = 0;
	int calculationlocation1 = 0;
	int calculationtemp0 = 0;
	int calculationtemp1 = 0;
	int calculationfinal = 0;
	int linecount = linecountglobal;
	calculationlocation0 += 100000 * ((int)(codelinearray[linecount][9]) - 48);
	calculationlocation0 += 10000 * ((int)(codelinearray[linecount][10]) - 48);
	calculationlocation0 += 1000 * ((int)(codelinearray[linecount][11]) - 48);
	calculationlocation0 += 100 * ((int)(codelinearray[linecount][12]) - 48);
	calculationlocation0 += 10 * ((int)(codelinearray[linecount][13]) - 48);
	calculationlocation0 += 1 * ((int)(codelinearray[linecount][14]) - 48);
	calculationlocation1 += 100000 * ((int)(codelinearray[linecount][16]) - 48);
	calculationlocation1 += 10000 * ((int)(codelinearray[linecount][17]) - 48);
	calculationlocation1 += 1000 * ((int)(codelinearray[linecount][18]) - 48);
	calculationlocation1 += 100 * ((int)(codelinearray[linecount][19]) - 48);
	calculationlocation1 += 10 * ((int)(codelinearray[linecount][20]) - 48);
	calculationlocation1 += 1 * ((int)(codelinearray[linecount][21]) - 48);
	calculationtemp0 = memory[calculationlocation0];
	calculationtemp1 = memory[calculationlocation1];
	calculationfinal = calculationtemp0 * calculationtemp1;
	memory[calculationlocation0] = (char)(calculationfinal);
	return;
}
void divide()
{
	if (debugmode == 1) {
		cout << "Divide" << " is running" << endl;
		cout << "Run in sub routine" << endl;
	}
	int calculationlocation0 = 0;
	int calculationlocation1 = 0;
	int calculationtemp0 = 0;
	int calculationtemp1 = 0;
	int calculationfinal = 0;
	int linecount = linecountglobal;
	calculationlocation0 += 100000 * ((int)(codelinearray[linecount][7]) - 48);
	calculationlocation0 += 10000 * ((int)(codelinearray[linecount][8]) - 48);
	calculationlocation0 += 1000 * ((int)(codelinearray[linecount][9]) - 48);
	calculationlocation0 += 100 * ((int)(codelinearray[linecount][10]) - 48);
	calculationlocation0 += 10 * ((int)(codelinearray[linecount][11]) - 48);
	calculationlocation0 += 1 * ((int)(codelinearray[linecount][12]) - 48);
	calculationlocation1 += 100000 * ((int)(codelinearray[linecount][14]) - 48);
	calculationlocation1 += 10000 * ((int)(codelinearray[linecount][15]) - 48);
	calculationlocation1 += 1000 * ((int)(codelinearray[linecount][16]) - 48);
	calculationlocation1 += 100 * ((int)(codelinearray[linecount][17]) - 48);
	calculationlocation1 += 10 * ((int)(codelinearray[linecount][18]) - 48);
	calculationlocation1 += 1 * ((int)(codelinearray[linecount][19]) - 48);
	calculationtemp0 = memory[calculationlocation0];
	calculationtemp1 = memory[calculationlocation1];
	calculationfinal = calculationtemp0 / calculationtemp1;
	memory[calculationlocation0] = (char)(calculationfinal);
	return;
}
void save_sub()
{
	if (debugmode == 1) {
		cout << "Save" << " is running" << endl;
		cout << "Run in sub routine" << endl;
	}
	int linecount = linecountglobal;
	int a = 0;
	while (true)
	{
		filelocation[a] = codelinearray[linecount][a + 4];
		a++;
		if (a == maximumcodeline) {
			break;
		}
	}


	ofstream myfile(filelocation);
	if (myfile.is_open()) {
		linecount = 0;
		while (true) {
			myfile << memory[linecount];
			linecount++;
			if (linecount == memorysize - 1) {
				cout << "EOL" << endl;
				break;
			}
		}
	}
	else {
		cout << "UNABLE" << endl;
	}

	a = 0;
	while (true)
	{
		filelocation[a] = 0;
		a++;
		if (a == 50) {
			break;
		}
	}
	return;
}
void load_sub()
{
	if (debugmode == 1) {
		cout << "Load" << " is running" << endl;
		cout << "Run in sub routine" << endl;
	}
	int linecount = linecountglobal;
	int a = 0;
	while (true)
	{
		filelocation[a] = codelinearray[linecount][a + 4];
		a++;
		if (a == maximumcodeline) {
			break;
		}
	}

	ifstream myfile(filelocation);
	if (myfile.is_open()) {
		int linecount = 0;
		while (true) {
			myfile.getline(memorychar, 51);
			linecount++;
			if (linecount == 1001) {
				break;
			}
		}
	}

	int b = 0;
	while (true)
	{
		if (b == memorysize) {
			break;
		}
		memory[b] = (int)(memorychar[b]);
		b++;

	}


	while (true)
	{
		filelocation[a] = 0;
		a++;
		if (a == 50) {
			break;
		}
	}
	return;
}
void Move()
{
	if (debugmode == 1) {
		cout << "Move" << " is running" << endl;
		cout << "Run in sub routine" << endl;
	}
	int linecount = linecountglobal;
	int calculationlocation0 = 0;
	int calculationlocation1 = 0;
	int memory0 = 0;
	int memory1 = 0;
	calculationlocation0 += 100000 * ((int)(codelinearray[linecount][5]) - 48);
	calculationlocation0 += 10000 * ((int)(codelinearray[linecount][6]) - 48);
	calculationlocation0 += 1000 * ((int)(codelinearray[linecount][7]) - 48);
	calculationlocation0 += 100 * ((int)(codelinearray[linecount][8]) - 48);
	calculationlocation0 += 10 * ((int)(codelinearray[linecount][9]) - 48);
	calculationlocation0 += 1 * ((int)(codelinearray[linecount][10]) - 48);
	calculationlocation1 += 100000 * ((int)(codelinearray[linecount][12]) - 48);
	calculationlocation1 += 10000 * ((int)(codelinearray[linecount][13]) - 48);
	calculationlocation1 += 1000 * ((int)(codelinearray[linecount][14]) - 48);
	calculationlocation1 += 100 * ((int)(codelinearray[linecount][15]) - 48);
	calculationlocation1 += 10 * ((int)(codelinearray[linecount][16]) - 48);
	calculationlocation1 += 1 * ((int)(codelinearray[linecount][17]) - 48);
	memory[calculationlocation1] = memory[calculationlocation0];
	memory[calculationlocation0] = 0;
	return;
}
void Copy()
{
	if (debugmode == 1) {
		cout << "Copy" << " is running" << endl;
		cout << "Run in sub routine" << endl;
	}
	int linecount = linecountglobal;
	int calculationlocation0 = 0;
	int calculationlocation1 = 0;
	int memory0 = 0;
	int memory1 = 0;
	calculationlocation0 += 100000 * ((int)(codelinearray[linecount][5]) - 48);
	calculationlocation0 += 10000 * ((int)(codelinearray[linecount][6]) - 48);
	calculationlocation0 += 1000 * ((int)(codelinearray[linecount][7]) - 48);
	calculationlocation0 += 100 * ((int)(codelinearray[linecount][8]) - 48);
	calculationlocation0 += 10 * ((int)(codelinearray[linecount][9]) - 48);
	calculationlocation0 += 1 * ((int)(codelinearray[linecount][10]) - 48);
	calculationlocation1 += 100000 * ((int)(codelinearray[linecount][12]) - 48);
	calculationlocation1 += 10000 * ((int)(codelinearray[linecount][13]) - 48);
	calculationlocation1 += 1000 * ((int)(codelinearray[linecount][14]) - 48);
	calculationlocation1 += 100 * ((int)(codelinearray[linecount][15]) - 48);
	calculationlocation1 += 10 * ((int)(codelinearray[linecount][16]) - 48);
	calculationlocation1 += 1 * ((int)(codelinearray[linecount][17]) - 48);
	memory[calculationlocation1] = memory[calculationlocation0];
	return;
}
void goto_()
{
	int linecount = linecountglobal;
	int interesting = 0;
	interesting += 1000 * ((int)(codelinearray[linecountglobal][5]) - 48);
	interesting += 100 * ((int)(codelinearray[linecountglobal][6]) - 48);
	interesting += 10 * ((int)(codelinearray[linecountglobal][7]) - 48);
	interesting += 1 * ((int)(codelinearray[linecountglobal][8]) - 48);
	interesting = interesting - 1;
	linecountglobal = interesting;
	return;
}

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
		if (linecount == maximumcodeline) {
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
		if (linecount == maximumcodeline) {
			return;
		}
	}
}
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
		if (linecount == maximumcodeline) {
			cout << endl;
			return;
		}
	}
}
void exits(void)
{
	if (debugmode == 1) {
		cout << "Exit" << " is running" << endl;
		cout << "Run in main routine" << endl;
	}
	return;
}
void run(void)
{
	if (debugmode == 1) {
		cout << "Run" << " is running" << endl;
		cout << "Run in main routine" << endl;
	}
	linecountglobal = 0;
	while (true) 
	{
		if (linecountglobal == 1000)
		{
			break;
		}
		if (debugmode == 1) 
		{
			cout << "Currently running: " <<linecountglobal << endl;
		}
		if (codelinearray[linecountglobal][0] == 112&& codelinearray[linecountglobal][1]== 114&& codelinearray[linecountglobal][2]== 105&& codelinearray[linecountglobal][3]==110)
		{
			print();
		}
		else if (codelinearray[linecountglobal][0] == 105 && codelinearray[linecountglobal][1] == 102)
		{
			ifI();
		}
		else if (codelinearray[linecountglobal][0] == 112&& codelinearray[linecountglobal][1]== 111 && codelinearray[linecountglobal][2] == 107 && codelinearray[linecountglobal][3] == 101)
		{
			poke();
		}
		else if (codelinearray[linecountglobal][0] == 112&& codelinearray[linecountglobal][1]== 108&& codelinearray[linecountglobal][2] ==117&& codelinearray[linecountglobal][3]==115)
		{
			plus_();
		}
		else if (codelinearray[linecountglobal][0] ==109 && codelinearray[linecountglobal][1]== 105&& codelinearray[linecountglobal][2]==110 && codelinearray[linecountglobal][3]==117)
		{
			minus_();
		}
		else if (codelinearray[linecountglobal][0] ==109 && codelinearray[linecountglobal][1]==117 && codelinearray[linecountglobal][2] ==108&& codelinearray[linecountglobal][3]==116)
		{
			multiply();
		}
		else if (codelinearray[linecountglobal][0] ==100 && codelinearray[linecountglobal][1]== 105&& codelinearray[linecountglobal][2]== 118&& codelinearray[linecountglobal][3]==105)
		{
			divide();
		}
		else if (codelinearray[linecountglobal][0] == 115&& codelinearray[linecountglobal][1]== 97&& codelinearray[linecountglobal][2]== 118&& codelinearray[linecountglobal][3]==101)
		{
			save_sub();
		}
		else if (codelinearray[linecountglobal][0] == 108&& codelinearray[linecountglobal][1]== 111&& codelinearray[linecountglobal][2]== 97&& codelinearray[linecountglobal][3]==100)
		{
			load_sub();
		}
		else if (codelinearray[linecountglobal][0] == 109&& codelinearray[linecountglobal][1]== 111&& codelinearray[linecountglobal][2]== 118&& codelinearray[linecountglobal][3]==101)
		{
			Move();
		}
		else if (codelinearray[linecountglobal][0] == 99&& codelinearray[linecountglobal][1]== 111&& codelinearray[linecountglobal][2]== 112&& codelinearray[linecountglobal][3]==121)
		{
			Copy();
		}
		else if (codelinearray[linecountglobal][0] == 103 && codelinearray[linecountglobal][1] == 111 && codelinearray[linecountglobal][2] == 116 && codelinearray[linecountglobal][3] == 111)
		{
			goto_();
		}
		else {
			cout << "Error on Line " << linecountglobal << endl;
		}
		linecountglobal++;
	}
}
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

int main()
{
	initialize();
	ifstream myfile("Mainline.kur");
	if (myfile.is_open()) {
		int linecount = 0;
		while (true) {
			myfile.getline(codelinearray[linecount], maximumcodeline);
			linecount++;
			if (linecount == 1001) {
				break;
			}
		}
		run();
	}
	else {
		while (true) {
			cout << " Select. (C)ode, (L)ine, (E)xit, (R)un, (S)ave, l(O)ad (c)lear (CD)Codelinearray Debug/(MD)Memory Debug" << endl;
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
			else if (command == 99) {
				initialize();
			}
			else if (command == 99) {

				cout << "commandline debug" << endl;

				cout << "line number" << endl;
				cin >> temp1;
				cout << "character number" << endl;
				cin >> temp2;
				cout << codelinearray[temp1][temp2] << endl;
			}
			else if (command == 109) {
				cout << "Memory debug" << endl;

				cout << "memory number" << endl;
				cin >> temp3;
				cout << memory[temp3] << endl;
			}
			else if (command == 0) {
				cin >> temp;
			}
		}
	}
}
