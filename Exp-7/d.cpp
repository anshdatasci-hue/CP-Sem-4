// Implement sorting operations intersection of two sorted array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A = {10, 20, 20, 30, 40, 50, 60, 70}; 
    vector<int> B = {15, 20, 20, 35, 40, 60, 80};
    vector<int> C;

    int i = 0, j = 0;

    while (i < A.size() && j < B.size())
    {
        if (A[i] < B[j])
        {
            i++;
        }
        else if (A[i] > B[j])
        {
            j++;
        }
        else
        {
            // avoid duplicates in result
            if (C.empty() || C.back() != A[i])
                C.push_back(A[i]);

            i++;
            j++;
        }
    }

    // Print result
    for (int x : C)
        cout << x << " ";

    return 0;
}