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

int getAverage(vector<int> nums){
    int sum = getSum(nums);
    return sum / nums.size();
}

int getMin(vector<int> nums){
    int min = nums[0];
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] < min){
            min = nums[i];
        }
    }
    return min;
}
int main(){

    vector<int> nums(10);
    for(int i = 0; i < nums.size(); i++){
        nums[i] = i;
    }
    cout << "The Sum: " << getSum(nums) << endl;
    cout << "The Average: "<< getAverage(nums) << endl;
    cout << "The Min: "<< getMin(nums) << endl;
    return 0;
}