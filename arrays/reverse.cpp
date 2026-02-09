/*Reverse an Array
Difficulty: EasyAccuracy: 55.32%Submissions: 270K+Points: 2Average Time: 5m
You are given an array of integers arr[]. You have to reverse the given array.

Note: Modify the array in place.

Examples:

Input: arr = [1, 4, 3, 2, 6, 5]
Output: [5, 6, 2, 3, 4, 1]
Explanation: The elements of the array are [1, 4, 3, 2, 6, 5]. After reversing the array, the first element goes to the last position, the second element goes to the second last position and so on. Hence, the answer is [5, 6, 2, 3, 4, 1].
Input: arr = [4, 5, 2]
Output: [2, 5, 4]
Explanation: The elements of the array are [4, 5, 2]. The reversed array will be [2, 5, 4].
Input: arr = [1]
Output: [1]
Explanation: The array has only single element, hence the reversed array is same as the original.
Constraints:
1 ≤ arr.size() ≤ 105
0 ≤ arr[i] ≤ 105

*/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        if (arr.empty()) return;
        size_t i = 0, j = arr.size() - 1;

        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
};

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.reverseArray(arr);
        for(int i=0;i<n;i++){
            if(i > 0) cout<<" ";
            cout<<arr[i];
        }
        cout<<endl;
    }
}
/*isme 2 pointers ka use hua hai jese i ka loop initally phele element se start hota hai and then j ka last element se start hota hai, aur dono pointers ek dusre ke opposite side se move karte hain. jab i<j ho tab tak swap karte rahenge, jab i>=j ho jaye to loop break ho jayega and size_t is used to avoid negative indexing issues in case of empty arrays*/