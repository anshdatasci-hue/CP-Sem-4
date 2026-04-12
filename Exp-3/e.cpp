#include <iostream>
using namespace std;

int countSubsets(int arr[], int n, int sum)
{
    if (sum == 0)
        return 1;
    if (n == 0)
        return 0;
    if (arr[n - 1] > sum)
        return countSubsets(arr, n - 1, sum);
    return countSubsets(arr, n - 1, sum) +
           countSubsets(arr, n - 1, sum - arr[n - 1]);
}

int main()
{
    int arr[] = {2, 4, 6, 10};
    int sum = 16;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Count of subsets = " << countSubsets(arr, n, sum);
    return 0;
}
