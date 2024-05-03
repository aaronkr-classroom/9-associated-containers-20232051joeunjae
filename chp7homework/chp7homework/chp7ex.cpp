#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include "split.h"

using namespace std;


map<string, vector<int>> xref(istream& in, vector<string> find_words(const string&) = split)
{
    string line;
    int line_number = 0;
    map<string, vector<int>> ret;

    while (getline(in, line))
    {
        ++line_number;

        vector<string> words = find_words(line);

        for (const auto& word : words)
        {
           
            auto& line_numbers = ret[word];
            if (find(line_numbers.begin(), line_numbers.end(), line_number) == line_numbers.end())
            {
                line_numbers.push_back(line_number);
            }
        }
    }
    return ret;
}

int main()
{
    map<string, vector<int>> ret = xref(cin);

    for (const auto& entry : ret)
    {
        cout << entry.first << " occurs on line" << (entry.second.size() > 1 ? "s: " : ": ");

      
        const int max_line_numbers = 15;
        int printed_count = 0;

        for (const auto& line_number : entry.second)
        {
        
            if (printed_count == 0)
            {
                cout << line_number;
            }
            else if (printed_count % max_line_numbers == 0)
            {
                cout << ", " << endl << "  " << line_number;
            }
            else
            {
                cout << ", " << line_number;
            }
            ++printed_count;
        }

        cout << endl;
    }

    return 0;
}