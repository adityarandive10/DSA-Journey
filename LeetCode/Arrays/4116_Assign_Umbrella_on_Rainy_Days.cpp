/*
========================================================
Problem       : 4116. Assign Umbrella on Rainy Days
Platform      : LeetCode
Difficulty    : Easy
Topic         : Array, Simulation, Greedy
Approach      : Greedy Simulation
Time          : O(N)
Space         : O(N) including output
========================================================
*/

class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {

        int alice = 0;
        int bob = 0;

        vector<string> ans;

        for (int i = 0; i < rain.size(); i++) {

            if (rain[i] == 1 && i + 1 < rain.size() && rain[i + 1] == 1) {

                if (alice <= bob) {
                    ans.push_back("Alice");
                    alice++;
                }
                else {
                    ans.push_back("Bob");
                    bob++;
                }
            } 
            else if (rain[i] == 1) {
                ans.push_back("Bob");
                bob++;
            } 
            else {
                ans.push_back("None");
            }
        }

        return ans;
    }
};
