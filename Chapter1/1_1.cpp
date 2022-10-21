#include<bits/stdc++.h>
using namespace std;

bool isUnique(string& a_string)
{
    bitset<256> setIfCharAvailable;
    for(int i = 0; i < a_string.length(); i++)
    {
        char curChar = a_string[i];
        if(setIfCharAvailable[curChar]) return false;
        setIfCharAvailable[curChar] = true;
    }
    return true;
}

int main()
{
    string first_string{"abcda"};
    string second_string{"abca"};

    cout<< boolalpha << isUnique(first_string) << endl;
    cout<< boolalpha << isUnique(second_string) << endl;
}