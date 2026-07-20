#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
vector<vector<int>> ans;
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> current;
        generate(0 ,candidates , target, current );
        return ans;
    }
    void generate( int index , vector<int>& candidates , int target, vector<int>& current){
        if(target <0) return;
        if( target == 0) {
            ans.push_back(current);
            return;
        }
        if(index == candidates.size()) return;
        // take nums[index]
        current.push_back(candidates[index]);
        generate(index , candidates , target - candidates[index] , current);
        current.pop_back();
        //skip 
        generate( index + 1, candidates , target , current);
        
    }
};