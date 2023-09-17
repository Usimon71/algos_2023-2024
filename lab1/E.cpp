#include <iostream>

int main(){
    int n; std::cin >> n;
    char* str = new char[n];
    for (int i = 0; i != n; ++i){
        std::cin >> str[i];
    }
    int lp = 0; int rp = n-1;
    bool ans = 1;
    int cor_count = 0;
    while (lp < rp and lp < n-1 and rp > 0){
        if (str[lp] != str[rp]){
            if (str[lp+1] == str[rp]){
                ++lp;
                ++cor_count;
            }
            else if (str[lp] == str[rp-1]){
                --rp;
                ++cor_count;
            }
            else{
                ans = 0;
                break;

            }
            
        }
        ++lp; --rp;
    }
    if (ans == 0 or cor_count > 1) std::cout << "NO";
    else std::cout << "YES";
    delete [] str;
    return 0;
}