
#include "leetcode.h"


vector<bool> SolutionHuiwen::canMakePaliQueries(string s, vector<vector<int>>& queries) {
    vector<bool> ret(queries.size(), false);
    vector<vector<int> > table(s.length()+1, vector<int>(26,0));
    for (int i = 0; i < s.length(); ++i)
    {
        table[1 + i] = table[i];
        table[1 + i][s[i] - 'a'] += 1;
    }

    for (int i = 0; i < table.size(); ++i)
    {
        for (int j = 0; j < table[0].size();++j)
        {
            cout << table[i][j]<< " ";
        }
        cout << "\n";
    }

        int j = 0;
    for (vector<vector<int>>::iterator i = queries.begin(); i != queries.end();++i, ++j)
    {
        if((*i)[2]>=13)
        {
            ret[j] = true;
        }else
        {
            
            int oddCNum = 0;
            int left, right, key;
            left = (*i)[0];
            right = (*i)[1];
            key = (*i)[2];

            vector<int> tem(26, 0);
            for (int m = 0; m < 26; ++m)
            {
                tem[m] = table[right+1][m] - table[left][m];
                if(tem[m]%2 != 0)
                {
                    oddCNum++;
                }
            }
            if (oddCNum <= 2 * key + (right-left + 1) % 2)
            {
                ret[j] = true;
            } 
        }         
    }
    return ret;
}