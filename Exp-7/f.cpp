//Find the triplate with sum = 0:
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,-1,2,-2,3,4,-3,-5,6,1,2,3,4};

    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size(); i++){
        
        // avoid duplicates
        if(i > 0 && arr[i] == arr[i-1]) continue;

        int left = i + 1;
        int right = arr.size() - 1;

        while(left < right){
            int sum = arr[i] + arr[left] + arr[right];

            if(sum == 0){
                cout << arr[i] << " " << arr[left] << " " << arr[right] << endl;

                // skip duplicates
                while(left < right && arr[left] == arr[left+1]) left++;
                while(left < right && arr[right] == arr[right-1]) right--;

                left++;
                right--;
            }
            else if(sum < 0){
                left++;
            }
            else{
                right--;
            }
        }
    }
}