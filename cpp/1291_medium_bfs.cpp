class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        queue<int> bfsQueue;

        for (int i = 1; i < 10; i++) {
            bfsQueue.push(i);
        }
        vector<int> result;
        while (!bfsQueue.empty()) {
            int X = bfsQueue.front();
            bfsQueue.pop();

            if (X <= high && X >= low)
                result.push_back(X);

            if (X > high)
                break;

            int Y = X % 10;
            if (Y < 9) {
                bfsQueue.push(X * 10 + (Y + 1));
            }

        }
        
        return result;
    }

};
