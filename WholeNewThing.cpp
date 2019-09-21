#include <iostream>
#include<cstdlib>
#include<cstdio>
#include<string>
#include <fstream>
using namespace std;
//Initializing
int setwidth = 0;
int setheight = 0;
//Command selecting
char commandselection;

//GLOBAL
int linecount = 0;
int graphicsmemory[1000][1000];
//Code Sector
int codelinenumberselection = 0;
char codeline[1000];
char codelinearray[1000][1000];
//Read Sector
int lineread = 0;
//Exit Sector
//Run Sector
	//Graphics
int graphicswidthtemp = 0;
int graphicsheighttemp = 0;
//Poking
int poketempdata = 0;
char chartemp1;
char chartemp2;
char chartemp3;
char chartemp4;
char chartemp5;
//GOTO
int gototemp = 0;
//INT&CHAR
char charvariable[10000];
int intvariable[10000];
int intselection = 0;
int charselection = 0;
int intvalue = 0;
char charvalue = 0;
//INPUT
char charinputtemp = 0;
int intinputtemp = 0;
int inputvariableselection = 0;
//IF
int ifvalue0 = 0;
int ifvalue1 = 0;
int variableindex = 0;
int baselineint = 0;
char intbigorsame;
//POKEMEM
int pokexgraphics = 0;
int pokeygraphics = 0;
int pokemem = 0;
int intpokevalue = 0;
char charpokevalue;
//CALCULATION
int calculationmemfrom = 0;
int calculationmemto = 0;
int calculationbefore = 0;
int calculationafter = 0;
//Plus
int plusvalue = 0;
//Minus
int minusvalue = 0;
//Multiply
int multiplyvalue = 0;
//Divide
int dividevalue = 0;
	
//save seq.
char filelocation[1000];
int savelocationtemp;

int main(void) {

	cout << "Set width" << endl;
	cin >> setwidth;
	cout << "Set height" << endl;
	cin >> setheight;

	cout << endl << endl << endl << "2019_09_14_22:00_Alpha_2.5.5_KurumiOS" << endl << endl << endl;
	cout << "Written by Kurumi_Ebisuzawa" << endl << endl << endl;

	while (true) {
		cout << " Select. (C)ode, (L)ine, (E)xit, (R)un, (S)ave, l(O)ad" << endl;
		cin >> commandselection;
		//code
		if (commandselection == 67) {
			/*
			1.Read the code
			2.Copy to 2D Array
			*/
			cout << "Line Number: ";
			cin >> codelinenumberselection;
			cout << endl;

			//Flush Codeline

			linecount = 0;
			while (true) {
				codeline[linecount] = 0;
				linecount++;
				if (linecount == 1000) {
					break;
				}
			}

			//Main Copy Line

			cout << "INPUT" << endl;
			cin >> codeline;
			//N.1
			cout << "DEBUG" << endl;
			linecount = 0;
			while (true) {
				codelinearray[codelinenumberselection][linecount] = codeline[linecount];

				//cout << "Debug" << " codelinearray: " << codelinearray[codelinenumberselection][linecount] << endl;
				//cout << "Debug" << " codeline: " << codeline[linecount] << endl;
				linecount++;
				//cout << "Debug" << " linecount: " << linecount << endl;
				if (linecount >= 999) {
					break;
				}
			}
		}
		//line
		else if (commandselection == 76) {
			cout << "Line number: ";
			cin >> lineread;
			cout << endl;
			linecount = 0;
			while (true) {
				cout << codelinearray[lineread][linecount];
				linecount++;
				if (codelinearray[lineread][linecount] == 39) {
					cout << endl;
					break;
				}
				else if (linecount >= 1000) {
					cout << endl;
					break;
				}
			}
		}
		//exit
		else if (commandselection == 69) {
			return 0;
		}
		//run
		else if (commandselection == 82) {
			linecount = 0;
			while (true) {
				if (linecount == 1000) {
					break;
				}
				if (codelinearray[linecount][0] > 122 || codelinearray[linecount][0] < 65) {
					cout << "CODE END" << endl;
					break;
				}
				cout << "DEBUG LINECOUNT : " << linecount << endl;
				if (codelinearray[linecount][0] == 80 && codelinearray[linecount][1] == 114) {
					//USAGE : Print
					graphicswidthtemp = 0;
					graphicsheighttemp = 0;
					while (true) {
						cout << (char)(graphicsmemory[graphicswidthtemp][graphicsheighttemp]);
						graphicswidthtemp++;
						if (setwidth <= graphicswidthtemp) {
							graphicsheighttemp++;
							graphicswidthtemp = 0;
							cout << endl;
						}
						if (graphicsheighttemp >= setheight) {
							break;
						}
					}
					linecount++;
				}
				else if (codelinearray[linecount][0] == 80 && codelinearray[linecount][1] == 111) {
					//poke
					//USAGE : Poke(XX,YY@Z)

					graphicswidthtemp = 0;
					graphicsheighttemp = 0;
					poketempdata = 0;
					chartemp1 = codelinearray[linecount][5];
					chartemp2 = codelinearray[linecount][6];
					chartemp3 = codelinearray[linecount][8];
					chartemp4 = codelinearray[linecount][9];
					chartemp5 = codelinearray[linecount][11];

					graphicswidthtemp += 10 * ((int)(chartemp1)-48);
					graphicswidthtemp += ((int)(chartemp2)-48);
					graphicsheighttemp += 10 * ((int)(chartemp3)-48);
					graphicsheighttemp += ((int)(chartemp4)-48);
					poketempdata += ((int)(chartemp5)-48);
					cout << "Graphicswidthtemp: " << graphicswidthtemp << endl;
					cout << "Graphicsheighttemp: " << graphicsheighttemp << endl;
					cout << "Poketempdata: " << poketempdata << endl;

					graphicsmemory[graphicswidthtemp][graphicsheighttemp] = poketempdata;
					linecount++;
				}

				else if (codelinearray[linecount][0] == 71 && codelinearray[linecount][1] == 111) {
					//goto
					//USAGE : Goto(XXX)
					chartemp1 = codelinearray[linecount][5];
					chartemp2 = codelinearray[linecount][6];
					chartemp3 = codelinearray[linecount][7];
					cout << chartemp1 << endl;
					cout << chartemp2 << endl;
					cout << chartemp3 << endl;
					gototemp += 100 * ((int)(chartemp1)-48);
					gototemp += 10 * ((int)(chartemp2)-48);
					gototemp += 1 * ((int)(chartemp3)-48);
					cout << "DEBUG GOTOTEMP: " << gototemp << endl;
					linecount = gototemp;
				}
				else if (codelinearray[linecount][0] == 73 && codelinearray[linecount][1] == 110 && codelinearray[linecount][2] == 116) {
					//USAGE : Int(XXX,Y)
					intselection = 0;
					intvalue = 0;
					intselection += 100 * ((int)(codelinearray[linecount][4]) - 48);
					intselection += 10 * ((int)(codelinearray[linecount][5]) - 48);
					intselection += 1 * ((int)(codelinearray[linecount][6]) - 48);
					intvalue += 1 * ((int)(codelinearray[linecount][8]));
					intvariable[intselection] = intvalue;
					linecount++;
				}
				else if (codelinearray[linecount][0] == 67 && codelinearray[linecount][1] == 104) {
					//USAGE : Char(XXX,Y)
					charselection = 0;
					charselection += 100 * ((int)(codelinearray[linecount][4]) - 48);
					charselection += 10 * ((int)(codelinearray[linecount][5]) - 48);
					charselection += 1 * ((int)(codelinearray[linecount][6]) - 48);
					charvalue = ((char)(codelinearray[linecount][8]));
					charvariable[charselection] = charvalue;
					linecount++;
				}
				else if (codelinearray[linecount][0] == 73 && codelinearray[linecount][1] == 110 && codelinearray[linecount][2] == 112) {
					//USAGE : Input(I/C,XXX)
					inputvariableselection = 0;
					intinputtemp = 0;
					inputvariableselection += 100 * ((int)(codelinearray[linecount][8]) - 48);
					inputvariableselection += 10 * ((int)(codelinearray[linecount][9]) - 48);
					inputvariableselection += 1 * ((int)(codelinearray[linecount][10]) - 48);
					if (codelinearray[linecount][6] == 73) {
						//INT
						cin >> intinputtemp;
						intvariable[inputvariableselection] = intinputtemp;
					}
					else if (codelinearray[linecount][6] == 67) {
						//CHAR
						cin >> charinputtemp;
						charvariable[inputvariableselection] = charinputtemp;
					}
					linecount++;
				}

				else if (codelinearray[linecount][0] == 73 && codelinearray[linecount][1] == 102 && codelinearray[linecount][2] == 73) {
					//USAGE : IfI(XXX,YYY,ZZZ,AAA,B/S) //X=if ZZZ is AAA then, Y=If ZZZ isn't AAA then, Z=Variable Address, Big/Same
					ifvalue0 = 0;
					ifvalue1 = 0;
					variableindex = 0;
					ifvalue0 += 100 * ((int)(codelinearray[linecount][3]) - 48);
					ifvalue0 += 10 * ((int)(codelinearray[linecount][4]) - 48);
					ifvalue0 += 1 * ((int)(codelinearray[linecount][5]) - 48);
					ifvalue1 += 100 * ((int)(codelinearray[linecount][7]) - 48);
					ifvalue1 += 10 * ((int)(codelinearray[linecount][8]) - 48);
					ifvalue1 += 1 * ((int)(codelinearray[linecount][9]) - 48);
					variableindex += 100 * ((int)(codelinearray[linecount][11]) - 48);
					variableindex += 10 * ((int)(codelinearray[linecount][12]) - 48);
					variableindex += 1 * ((int)(codelinearray[linecount][13]) - 48);
					baselineint += 100 * ((int)(codelinearray[linecount][15]) - 48);
					baselineint += 10 * ((int)(codelinearray[linecount][16]) - 48);
					baselineint += 1 * ((int)(codelinearray[linecount][17]) - 48);
					intbigorsame = ((char)(codelinearray[linecount][19]));
					if (intbigorsame == 83) {
						//Same
						if (intvariable[variableindex] == baselineint) {
							linecount = ifvalue1;
						}
						else {
							linecount = ifvalue0;
						}
					}
					else if (intbigorsame == 66) {
						//Big
						if (intvariable[variableindex] >= baselineint) {
							linecount = ifvalue1;
						}
						else {
							linecount = ifvalue0;
						}
					}

				}
				else if (codelinearray[linecount][0] == 73 && codelinearray[linecount][1] == 102 && codelinearray[linecount][2] == 67) {
					//USAGE : IfC(XXX,YYY,ZZZ,A) //Jmp to YYY if ZZZ = AAA or other, XXX
					ifvalue0 = 0;
					ifvalue1 = 0;
					variableindex = 0;
					ifvalue0 += 100 * ((int)(codelinearray[linecount][3]) - 48);
					ifvalue0 += 10 * ((int)(codelinearray[linecount][4]) - 48);
					ifvalue0 += 1 * ((int)(codelinearray[linecount][5]) - 48);
					ifvalue1 += 100 * ((int)(codelinearray[linecount][7]) - 48);
					ifvalue1 += 10 * ((int)(codelinearray[linecount][8]) - 48);
					ifvalue1 += 1 * ((int)(codelinearray[linecount][9]) - 48);
					variableindex += 100 * ((int)(codelinearray[linecount][11]) - 48);
					variableindex += 10 * ((int)(codelinearray[linecount][12]) - 48);
					variableindex += 1 * ((int)(codelinearray[linecount][13]) - 48);
					if (charvariable[variableindex] == codelinearray[linecount][15]) {
						linecount = ifvalue1;
					}
					else {
						linecount = ifvalue0;
					}

				}
				else if (codelinearray[linecount][0] == 80 && codelinearray[linecount][1] == 111 && codelinearray[linecount][2] == 107 && codelinearray[linecount][3] == 101 && codelinearray[linecount][4] == 109 && codelinearray[linecount][5] == 101) {
					//USAGE : Pokemem(XXX,YYY&AAA,I/C)
					pokexgraphics += 100*((int)(codelinearray[linecount][8]) - 48);
					pokexgraphics += 10*((int)(codelinearray[linecount][9]) - 48);
					pokexgraphics += 1*((int)(codelinearray[linecount][10]) - 48);
					pokeygraphics += 100*((int)(codelinearray[linecount][12]) - 48);
					pokeygraphics += 10*((int)(codelinearray[linecount][13]) - 48);
					pokeygraphics += 1*((int)(codelinearray[linecount][14]) - 48);
					pokemem += 100*((int)(codelinearray[linecount][16]) - 48);
					pokemem += 10*((int)(codelinearray[linecount][17]) - 48);
					pokemem += 1*((int)(codelinearray[linecount][18]) - 48);
					if (codelinearray[linecount][20] == 73) {
						intpokevalue = intvariable[pokemem];
						graphicsmemory[pokexgraphics][pokeygraphics] = intpokevalue;
					}
					else if (codelinearray[linecount][20] == 67) {
						charpokevalue = charvariable[pokemem];
						graphicsmemory[pokexgraphics][pokeygraphics] = (int)(charpokevalue);
					}
				}
				else if (codelinearray[linecount][0] == 80&& codelinearray[linecount][1] == 108&& codelinearray[linecount][2] == 117) {
				//USAGE:Plus(XXX,YYY@AAA)
				calculationmemfrom = 0;
				calculationmemto = 0;
				calculationbefore = 0;
				calculationafter = 0;
				plusvalue = 0;
				calculationmemfrom += 100*((int)(codelinearray[linecount][5]) - 48);
				calculationmemfrom += 10*((int)(codelinearray[linecount][6]) - 48);
				calculationmemfrom += ((int)(codelinearray[linecount][7]) - 48);
				calculationmemto += 100*((int)(codelinearray[linecount][9]) - 48);
				calculationmemto += 10*((int)(codelinearray[linecount][10]) - 48);
				calculationmemto += 1*((int)(codelinearray[linecount][11]) - 48);
				plusvalue += 100*((int)(codelinearray[linecount][13]) - 48);
				plusvalue += 10*((int)(codelinearray[linecount][14]) - 48);
				plusvalue += ((int)(codelinearray[linecount][15]) - 48);
				calculationbefore = intvariable[calculationmemfrom];
				calculationafter = calculationbefore + plusvalue;
				intvariable[calculationafter] = calculationafter;
				}
				else if (codelinearray[linecount][0] == 77&& codelinearray[linecount][1] == 105&& codelinearray[linecount][2] == 110) {
				//USAGE:Minus(XXX,YYY@AAA)
				calculationmemfrom = 0;
				calculationmemto = 0;
				calculationbefore = 0;
				calculationafter = 0;
				minusvalue = 0;
				calculationmemfrom += 100*((int)(codelinearray[linecount][7]) - 48);
				calculationmemfrom += 10*((int)(codelinearray[linecount][8]) - 48);
				calculationmemfrom += ((int)(codelinearray[linecount][9]) - 48);
				calculationmemto += 100*((int)(codelinearray[linecount][11]) - 48);
				calculationmemto += 10*((int)(codelinearray[linecount][12]) - 48);
				calculationmemto += ((int)(codelinearray[linecount][13]) - 48);
				minusvalue += 100*((int)(codelinearray[linecount][15]) - 48);
				minusvalue += 10*((int)(codelinearray[linecount][16]) - 48);
				minusvalue += ((int)(codelinearray[linecount][17]) - 48);
				calculationbefore = intvariable[calculationmemfrom];
				calculationafter = calculationbefore - minusvalue;
				intvariable[calculationafter] = calculationafter;
				}
				else if (codelinearray[linecount][0] == 68&& codelinearray[linecount][1] ==105 && codelinearray[linecount][2] == 118) {
				//USAGE:Divide(XXX,YYY@AAA)
				calculationmemfrom = 0;
				calculationmemto = 0;
				calculationbefore = 0;
				calculationafter = 0;
				dividevalue = 0;
				calculationmemfrom += 100*((int)(codelinearray[linecount][7]) - 48);
				calculationmemfrom += 10*((int)(codelinearray[linecount][8]) - 48);
				calculationmemfrom += ((int)(codelinearray[linecount][9]) - 48);
				calculationmemto += 100*((int)(codelinearray[linecount][11]) - 48);
				calculationmemto += 10*((int)(codelinearray[linecount][12]) - 48);
				calculationmemto += ((int)(codelinearray[linecount][13]) - 48);
				dividevalue += 100*((int)(codelinearray[linecount][15]) - 48);
				dividevalue += 10*((int)(codelinearray[linecount][16]) - 48);
				dividevalue += ((int)(codelinearray[linecount][17]) - 48);
				calculationbefore = intvariable[calculationmemfrom];
				calculationafter = calculationbefore / dividevalue;
				intvariable[calculationafter] = calculationafter;
				}
				else if (codelinearray[linecount][0] == 77&& codelinearray[linecount][1] == 117&& codelinearray[linecount][2] == 108) {
				//USAGE:Multiply(XXX,YYY@AAA)
				calculationmemfrom = 0;
				calculationmemto = 0;
				calculationbefore = 0;
				calculationafter = 0;
				multiplyvalue = 0;
				calculationmemfrom += 100*((int)(codelinearray[linecount][9]) - 48);
				calculationmemfrom += 10*((int)(codelinearray[linecount][10]) - 48);
				calculationmemfrom += ((int)(codelinearray[linecount][11]) - 48);
				calculationmemto += 100*((int)(codelinearray[linecount][13]) - 48);
				calculationmemto += 10*((int)(codelinearray[linecount][14]) - 48);
				calculationmemto += ((int)(codelinearray[linecount][15]) - 48);
				multiplyvalue += 100*((int)(codelinearray[linecount][17]) - 48);
				multiplyvalue += 10*((int)(codelinearray[linecount][18]) - 48);
				multiplyvalue += ((int)(codelinearray[linecount][19]) - 48);
				calculationbefore = intvariable[calculationmemfrom];
				calculationafter = calculationbefore * multiplyvalue;
				intvariable[calculationafter] = calculationafter;
				}
				
			
				else if (codelinearray[linecount][0] == 69 && codelinearray[linecount][1] == 110) {
					//USAGE : End
					break;
				}
			}

		}
		//save
		else if (commandselection == 83) {
			cin >> filelocation;
			ofstream myfile(filelocation);
			if (myfile.is_open()) {
				savelocationtemp = 0;
				linecount = 0;
				while (true) {
					myfile << codelinearray[linecount][savelocationtemp];
					savelocationtemp++;
					if (savelocationtemp >= 1000) {
						savelocationtemp = 0;
						linecount++;
						myfile << "\n";
					}
					if (linecount >= 1000) {
						cout << "EOL" << endl;
						break;
					}
				}
			}
			else {
				cout << "UNABLE" << endl;
			}
		}
		//load
		else if (commandselection == 79) {
		cin >> filelocation;
		ifstream myfile(filelocation);
		if (myfile.is_open()) {
			linecount = 0;
			while (true) {
				myfile.getline(codelinearray[linecount], 999);
				linecount++;
				if (linecount >= 1000) {
					break;
				}
			}
		}
		}
		//DEFAULT
		else
		{
			cout << "WHAT ARE YOU FUCKING THINKING ABOUT?" << endl;
		}
	}
}