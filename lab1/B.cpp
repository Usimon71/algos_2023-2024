#include <iostream>

int main(){
    int n ,k; std::cin >> n >> k;
    if (k < 0) k = n - (-k)%n;
    else k = k%n;
    int* nums = new int[n];
    for (int i = 0; i != n; ++i){
        int x; std::cin >> x;
        nums[i] = x;
    }
    if (n == 1){
        return nums[0];
    }
    else{
        for (int i = 0; i != n/2; ++i){
            int t = nums[i];
            nums[i] = nums[n-i-1];
            nums[n-i-1] = t;
        }
        
        for (int i = 0; i != k/2; ++i){
            int t = nums[i];
            nums[i] = nums[k-i-1];
            nums[k-i-1] = t;
        }
        for (int i = k; i != k + (n-k)/2; ++i){
            int t = nums[i];
            nums[i] = nums[n-i-1+k];
            nums[n-i-1+k] = t;
        }
        std::cout << nums[0];
        for (int i = 1; i != n; ++i) std::cout << " " << nums[i];
    }
    delete [] nums;
    
    return 0;
}