class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        // Calculate total apples
        int totalApples = 0;
        for (int a : apple) {
            totalApples += a;
        }
        
        // Sort capacity in descending order to use largest boxes first
        sort(capacity.begin(), capacity.end(), greater<int>());
        
        // Greedily select boxes
        int boxCount = 0;
        int currentCapacity = 0;
        
        for (int cap : capacity) {
            currentCapacity += cap;
            boxCount++;
            
            if (currentCapacity >= totalApples) {
                break;
            }
        }
        
        return boxCount;
    }
};