class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n=capacity.size();
        int ans = 0;
        vector<int> need;
        
        for(int i=0;i<n;i++){
            int cost = capacity[i]-rocks[i];
            need.push_back(cost);
        }
        sort(need.begin(), need.end());
        for(int cost:need){
            if(additionalRocks>=cost){
                additionalRocks -= cost;
                ans++;
            }
            else{
                return ans;
            }
        }
        return ans;
    }
};