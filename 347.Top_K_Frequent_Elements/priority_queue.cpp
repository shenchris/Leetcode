class Solution {
public:
    struct compare{
    public:
        bool operator()(pair<int, int>& lhs, pair<int, int>& rhs){
                return lhs.second > rhs.second;;
        }
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for (int i = 0; i < nums.size(); ++i) {
            map[nums[i]]++;
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>,compare> que;

        for(auto it:map) {
            que.push(it);
            if (que.size()>k){
                que.pop();
            }
        }

        vector<int> result;
        while (!que.empty()){
            result.push_back(que.top().first);
            que.pop();
        }
        return result;

    }
};
