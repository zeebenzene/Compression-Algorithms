#include <string>
#include <fstream>
#include <streambuf>
#include <iostream>

using namespace std;

string openFile(const string& filename){
	ifstream t(filename);
    string str((istreambuf_iterator<char>(t)),
                 istreambuf_iterator<char>());
    return str;
}

outputFile(const string& filename, const string& text){
	ofstream myfile;
  	myfile.open (filename);
  	myfile << text;
  	myfile.close();
}