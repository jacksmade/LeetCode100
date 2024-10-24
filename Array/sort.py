#include <iostream>
#include <vector>
using namespace std;

pair<int, pair<int, int>> kadaneAlgorithmWithSubarray(vector<int>& arr) {
    int current_max = arr[0];
    int max_so_far = arr[0];
    
    int start = 0, end = 0, temp_start = 0;  // Track the indices

    for (int i = 1; i < arr.size(); i++) {
        // If starting a new subarray, update temp_start
        if (arr[i] > current_max + arr[i]) {
            current_max = arr[i];
            temp_start = i;  // Start a new subarray
        } else {
            current_max += arr[i];
        }
        
        // Update max_so_far and the indices when a new maximum is found
        if (current_max > max_so_far) {
            max_so_far = current_max;
            start = temp_start;  // Set the new start
            end = i;  // Set the new end
        }
    }

    return {max_so_far, {start, end}};
}

int main() {
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};

    auto result = kadaneAlgorithmWithSubarray(arr);
    int max_sum = result.first;
    int start = result.second.first;
    int end = result.second.second;

    cout << "Maximum sum of the contiguous subarray is: " << max_sum << endl;
    cout << "Subarray with the maximum sum is: [ ";
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}
