#include <iostream>
#include <string>

using namespace std;

const int CHAR = 256;

bool areAnagram(string &s1, string &s2)
{
    if (s1.length() != s2.length())
        return false;
    int count[CHAR] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for (int i = 0; i < CHAR; i++)
    {
        if (count[i] != 0)
            return false;
    }

    return true;
}

int main()
{
    string s1, s2;
    cout << "enter string one";
    cin >> s1;
    cout << "enter string two";
    cin >> s2;
    bool isana = areAnagram(s1, s2);
    if (isana)
    {
        cout << "is anagram";
    }
    else
    {
        cout << "not anagram";
    }
    return 0;
}