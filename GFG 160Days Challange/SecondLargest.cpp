class Solution {
  public:
    
    int getSecondLargest(vector<int> &arr) {
    if (arr.size() < 2) {
        return -1;  
    }

    int first = INT_MIN, second = INT_MIN;

    
    for (int num : arr) {
        if (num > first) {
            second = first;
            first = num;
        } else if (num > second && num != first) {
            second = num;
        }
    }

    
    return (second == INT_MIN) ? -1 : second;
}
    
};