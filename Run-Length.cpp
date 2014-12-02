#include <iostream>
#include<fstream>
#include<string>
#include <sstream>
#include <stdio.h>
#include <vector>

//g++ -std=c++0x

using namespace std;

class Compressor
{
	public:

		virtual string compress(const string& content) = 0;
		virtual string decompress(const string& content) = 0;
};



class RunLength: public Compressor
{
public:
	string compress(const string& content) {
	  	stringstream ss;
	  	for (int i = 0; i < content.size(); ) {
			char current = content[i];
			int count = 0;

			do {
		  		++i;
		  		++count;
			} while (i < content.size() && content[i] == current);
				ss << current  << ' ' << count << ' ';
	  	}
	  	return ss.str();
	}

	string decompress(const string& content){
		vector<string> splitarr = splitString(content);
		stringstream ss;

		for(int i = 0; i < splitarr.size(); i += 2) {
			string toExpand = splitarr.at(i);
			string numExpandRaw = splitarr.at(i+1);
			int numExpand = stoi(numExpandRaw);
			for(int i = 0; i < numExpand; i++) {
				ss << toExpand;
			}
		}
		return ss.str();
	}


	vector<string> splitString(const string& str) {
	    istringstream iss(str);
		string s;

		vector<string> list;

		while(getline(iss,s,' ')){
			list.push_back(s);
		}
		return list;
	}
};

int main()
{
    RunLength word;
	cout << word.compress("wwwwaaad2222222222343434exxxxxx");
}
