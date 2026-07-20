#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    vector<vector<int>> ans;

   public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> current;
        sort(candidates.begin(), candidates.end());
        generate(0, current, target, candidates);
        return ans;
    }
    void generate(int index, vector<int>& current, int target,
                  vector<int>& candidates) {
        if (target == 0) {
            ans.push_back(current);
            return;
        }
        if (target < 0 || index == candidates.size()) return;
        for (int i = index; i < candidates.size(); i++) {
            if (i > index && candidates[i] == candidates[i - 1]) {
                continue;
            }

            current.push_back(candidates[i]);
            generate(i + 1, current, target - candidates[i],
                     candidates);
            current.pop_back();
        }
    }
};