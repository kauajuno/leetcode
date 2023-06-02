#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maximumDetonation(vector<vector<int>>& bombs) {
        map<pair<int, int>, bool> bpmap, copymap;
        map<pair<int, int>, int> radiusmap;
        int highest = 1, highestPattern = 1;
        for(vector<int> b : bombs){
            if(bpmap.find(make_pair(b[0], b[1])) != bpmap.end()){
                highest++;
                highestPattern++;
            }
            bpmap[make_pair(b[0], b[1])] = false;
            radiusmap[make_pair(b[0], b[1])] = b[2];
        }
        for(vector<int> b : bombs){
            int score = highestPattern;
            stack<vector<int>> s;
            s.push(b);
            
            copymap = bpmap;
            copymap[make_pair(b[0], b[1])] = true;
            while(!s.empty()){
                vector<int> currBomb = s.top();
                s.pop();
                for(auto it = copymap.begin(); it != copymap.end(); it++){
                    if(!copymap[it->first] && distance(it->first, make_pair(currBomb[0], currBomb[1])) <= currBomb[2]){
                        s.push({it->first.first, it->first.second, radiusmap[it->first]});
                        copymap[it->first] = true;
                        score++;
                    }
                }
            }
            if(score > highest) highest = score;
        }
        return highest;
    }

    float distance(pair<int, int> a, pair<int, int> b){
        return sqrt(pow(a.first - b.first, 2) + pow(a.second - b.second, 2));
    }
};

int main(){
    
}