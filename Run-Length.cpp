#include <iostream>
#include<string>
#include <sstream>

using namespace std;

string run_length(const string& s)
{
    char c = ' ';
    int num = 0;
    string result;
    string::const_iterator it = s.begin();
    for(; it != s.end(); ++it)
    {
        if(*it!=c)
        {
            if(num!=0)
            {
                ostringstream ss;
                ss << num;
                string num_s(ss.str());
                result += num_s;
            }

            c = *it;
            result.push_back(c);

            num = 1;
        }
        else
        {
            num++;
        }
    }

    ostringstream ss;
    ss << num;
    string num_s(ss.str());
    result += num_s;

    return result;


string run_length(const string& content) {
  stringstream ss;
  for (int i = 0; i < content.size(); ) {
    // Each iteration of this loop represents a run
    char current = content[i];
    int count = 0;

    // Figure out the length of the run
    do {
      ++i;
      ++count;
    } while (i < content.size() && content[i] == current);

    // Dump the run
    ss << current << count;
  }
  return ss.str();
}

int main()
{
    std::string test = "wwwwaaadexxxxxx";
    cout << run_length(test) << endl;
}
