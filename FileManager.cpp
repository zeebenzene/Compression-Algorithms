#include <iostream>
#include <fstream>
using namespace std;

string saveCompressedFile(const string& content){
	ofstream myfile;
  	myfile.open (content)
  	myfile.close();
}

string openFile(const string& content){
	stringstream ss;
	myReadFile.open("text.txt");
	 char output[100];
 	if (myReadFile.is_open()) {
	while (!myReadFile.eof()) {


    myReadFile >> output;
    cout<<output;


 	}
	}
	myReadFile.close();

}
