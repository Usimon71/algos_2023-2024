#include <iostream>
#include <cmath>
long long convert(int first_1, int zeros, int sec_1){
    long long ans = 0;
    for (int i = 0; i != sec_1; ++i) ans += std::pow(2, i);
    for (int i = sec_1 + zeros; i != first_1 + zeros + sec_1; ++i) ans += std::pow(2, i);
    return ans;
}
int main(){
    long long x, y; std::cin >> x >> y;
    int k = 0;
    for(int first_1 = 1; first_1 != 59; ++first_1){
        for(int zeros = 1; zeros != 59; ++zeros){
            for(int sec_1 = 1; sec_1 != 59; ++sec_1){
                if (first_1+zeros+sec_1 > 60) break;
                long long conv = convert(first_1, zeros, sec_1);
                if ( conv >= x and conv <= y) ++k;
            }
        }
    }
    std::cout << k;
    return 0;
}