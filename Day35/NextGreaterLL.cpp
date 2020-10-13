class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> res;
        stack<int> Stack;

        for (auto ptr = head; ptr != nullptr; ptr = ptr->next)
            res.push_back(ptr->val);

        for (int i = res.size() - 1; i >= 0; i--) {
            int val = res[i];

            while (!Stack.empty() && Stack.top() <= val)
                Stack.pop();

            res[i] = Stack.empty() ? 0 : Stack.top();
            Stack.push(val);
        }
        return res;
    }
};
