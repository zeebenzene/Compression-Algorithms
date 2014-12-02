#include<string>

using namespace std;

class Compressor
{
	public:

		virtual string compress(const string& content) = 0;
		virtual string decompress(const string& content) = 0;
};

