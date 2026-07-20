#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
vector<string> ans;
public:
    vector<string> generateParenthesis(int n) {
        paranethesis( n , 0 , 0 , "");
        return ans;

    }
public:
    void paranethesis(int n , int openBracket , int closedBracket , string current){
        if( current.length() == 2*n) {
            ans.push_back(current);
            return ;
        }
        if(openBracket < n){
            paranethesis( n , openBracket + 1, closedBracket , current + "(");
        }
        if( openBracket > closedBracket){
            paranethesis( n , openBracket , closedBracket + 1 , current + ")");
       }
}

};