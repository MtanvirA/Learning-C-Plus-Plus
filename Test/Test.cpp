#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
string longestCommonPrefix(vector<string> &strs)
{
    // sorting the words for optimized solution
    sort(strs.begin(), strs.end());
    // initializing the starting index
    int i = 0;
    // initializing the size to access the last element
    int strSize = strs.size();
    // separating the first and last words
    string a = strs[0];
    string b = strs[strs.size() - 1];
    // looping through the letters of the first and last word
    while (i < a.size() && i < b.size())
    {
        if (a[i] == b[i])
        {
            i++;
        }
        else
            break;
    }
    // intializing the string answer
    string strAns(i+1, ' ');
    for (int j = 0; j < i; j++)
    {
        strAns[j] = a[j];
    }
    return strAns;
}

int main()
{
    vector<string> strs = {"Car", "Card", "Catch"};
    string strAns = longestCommonPrefix(strs);
    cout << strAns << endl;
    return 0;
}