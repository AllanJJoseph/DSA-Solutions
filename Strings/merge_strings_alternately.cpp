#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string res;
        int i = 0;
        while (i < w1.size() || i < w2.size()) {
            if (i < w1.size()) res.push_back(w1[i]);
            if (i < w2.size()) res.push_back(w2[i]);
            i++;
        }
        return res;
    }
};
