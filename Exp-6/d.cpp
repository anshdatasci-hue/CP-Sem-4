// Find the first occurance of an element in sorted array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {
        7, 3, 9, 5, 2,
        8, 4, 6, 1, 4,
        4, 10, 11, 12, 4,
        13, 14, 15, 16, 4};

    sort(arr.begin(), arr.end());

    int x;
    cout << "Enter the no. between 0-9 : ";
    cin >> x;

    auto it = lower_bound(arr.begin(), arr.end(), x);

    if (it != arr.end() && *it == x)
        cout << "First occurrence of " << x << " is at index " << it - arr.begin() << endl;
    else
        cout << "Not found";
}
