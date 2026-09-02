class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0, total=0, tank=0;
        int n=gas.size();
        for(int i=0;i<n;i++){
            tank+=gas[i]-cost[i];
            total+=gas[i]-cost[i];

            if(tank<0){
                start = i+1;
                tank=0;
            }
        }
        if(total<0){
            return -1;
        }
        return start;
    }
};