#include <iostream>

using namespace std;

bool isPalindrome(string str)
{
    if(str.length() <= 1) //base case
    {
        return true;
    }

    char first = str[0];
    char last = str[str.length() - 1];
    if(first == last)
    {
        string sub = str.substr(1, str.length() - 2);
        return isPalindrome(sub);
    }
    else
    {
        return false;
    }
}

int main()
{
    string str;
    cout << "Enter str: " << endl;
    cin >> str;
    cout << isPalindrome(str) << endl;
    return 0;
}
//g++ -std=c++17 isPalindrome.cpp
