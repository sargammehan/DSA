
class Solution {
  public:
    void sortedInsert(stack<int> &s, int x) {
        if (s.empty() || s.top() <= x) {
            s.push(x);
            return;
        }

        int temp = s.top();
        s.pop();

        sortedInsert(s, x);

        s.push(temp);
    }

    void sortStack(stack<int> &s) {
        if (s.empty()) {
            return;
        }

        int x = s.top();
        s.pop();

        sortStack(s);

        sortedInsert(s, x);
    }
};
