#include <iostream>
#include <vector>
using namespace std;

int getSum(vector<int> nums){
    int sum = 0;
    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
    }
    return sum;
}

int main(){

    vector<int> nums(10);
    for(int i = 0; i < nums.size(); i++){
        nums[i] = i;
    }
    cout << getSum(nums) << endl;
    return 0;
}