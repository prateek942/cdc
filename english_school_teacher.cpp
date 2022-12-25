#include<iostream>
using namespace std;
int longest(string word)
{
    int n = word.length();
    int res = 0 , curr_len = 0 , i = 0;
    for(; i < n ; i++)
    {
        if(word[i] != ' ')
        {
            curr_len++;
        }
        else
        {
            res = max(res , curr_len);
            curr_len = 0;
        }
    }
    return max(res , curr_len);
}
int main()
{
    string s ;
    getline(cin , s);
    cout << longest(s);
    return 0;
}
