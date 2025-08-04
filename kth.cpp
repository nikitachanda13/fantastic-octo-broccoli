#include <iostream>
#include <queue> // for priority_queue
#include <vector>
using namespace std;

int kthSmallest(int arr[], int n, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < n; i++)
        minHeap.push(arr[i]);

    for (int i = 0; i < k - 1; i++)
        minHeap.pop();

    return minHeap.top();
}

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Kth smallest element is: " << kthSmallest(arr, n, k);
    return 0;
}
