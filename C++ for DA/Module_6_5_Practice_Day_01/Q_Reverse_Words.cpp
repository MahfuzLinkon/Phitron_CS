#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int i =0;
    while (ss >> word)
    {
        for (int i = 0; i < word.size() - 1; i++)
        {
            for(int j = i+1; j< word.size(); j++)
            {
                swap(word[i], word[j]);
            }
        }
        if (i == 0)
        {
            cout << word;
            i =1;
        }else {
            cout << " " << word ;
        }
        
    }

    return 0;
}