//
#include <iostream>
#include <string>
using namespace std;
string change(string& str)
{
    if (str.length() < 3)
    {
        return str;
    }
    while (str.find("!!!") != -1)
        str = str.replace(str.find("!!!"), 3, "**");
    return str;
}
int main()
{
    string str;
    cout << "Enter " << endl;
    getline(cin, str);
    change(str);
    cout << str << endl;
}