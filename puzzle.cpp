#include "leetcode.h"
vector<int> SolutionPuzzle::findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
    vector<int> ret;
    map<int, int> wordMod;
    for (int i = 0; i < words.size(); ++i){
        int m = 0;
        for (int j = 0; j < words[i].length(); ++j){
            m |= (1 << (words[i][j] - 'a'));
        }
        wordMod[m] += 1;
    }

    for (int i = 0; i < puzzles.size(); ++i){
        ret.push_back(0);
        int m = 0;
        for (int j = 0; j < puzzles[i].size(); ++j){
            m |= (1 << (puzzles[i][j] - 'a'));
        }
        for (int j = m; j; j = (j-1)&m){
            if((1<<(puzzles[i][0] - 'a')) &j){
                ret[i] += wordMod[j];
            }
        }
    }
    return ret;
}    
