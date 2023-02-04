class Solution {
private:
    class My_queue {
    private:
        deque<int> que;
    public:
        void pop(int value) {
            if (!que.empty() && value == que.front()) {
                que.pop_front();
            }
        }

        void push(int val) {
            while (!que.empty() && val > que.back()) que.pop_back();
            que.push_back(val);
        }

        int peek_front() {
            return que.front();
        }
    };

public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k) {
        My_queue window;
        vector<int> result;

        for (int i = 0; i < k; ++i) {
            window.push(nums[i]);
        }
        result.push_back(window.peek_front());

        for (int i = k; i < nums.size() ;++i) {
            window.pop(nums[i-k]);
            window.push(nums[i]);
            result.push_back(window.peek_front());
        }

        return  result;
    }
};

