// Find index of last occurance of an element

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {
        7, 3, 9, 5, 2,
        8, 4, 6, 1, 4,
        4, 10, 11, 12, 4,
        13, 14, 15, 16, 4
    };

    sort(arr.begin(), arr.end());

    int x;
    cout << "Enter number: ";
    cin >> x;

    auto it = upper_bound(arr.begin(), arr.end(), x);

    if (it != arr.begin() && *(it - 1) == x)
        cout << "Last occurrence of " << x << " is at index " << (it - arr.begin() - 1);
    else
        cout << "Not found";
}