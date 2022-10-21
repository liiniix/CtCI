#include<bits/stdc++.h>
using namespace std;

bool checkIsPermutation(string& first_string, string& second_string)
{
    if(first_string.size() != second_string.size())
        return false;
    
    vector<bool> state(26, false); // if permutation, state will be all false

    for(int i=0; i<first_string.size(); ++i)
    {
        char first_string_char_pos = first_string[i] - 'a';
        char second_string_char_pos = second_string[i] - 'a';

        state[first_string_char_pos] = !state[first_string_char_pos];
        state[second_string_char_pos] = !state[second_string_char_pos];
    }

    bool stateFalse = all_of(state.cbegin(), state.cend(), [](bool curr){return !curr;});

    return stateFalse;

}

int main()
{
    string first_string = "abcd";
    string second_string = "abdc";

    cout<<boolalpha<<checkIsPermutation(first_string, second_string)<<endl;
}