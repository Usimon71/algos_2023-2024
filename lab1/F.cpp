#include <iostream>

int main(){
    int n; std::cin >> n;
    int* days = new int[n];
    for (int i = 0; i != n; ++i){
        std::cin >> days[i];
    }
    int* pref_left = new int[n+1];
    int* pref_right = new int[n+1];
    pref_left[0] = 0;
    int ls = 0;
    for (int i = 1; i < n+1; ++i){
        ls += days[i-1];
        pref_left[i] = ls;
    }
    int rs = 0;
    for (int i = n-1; i != -1; --i){
        rs += days[i];
        pref_right[i] = rs;
    }
    pref_right[n] = 0;
    bool fl = 0;
    /*for (int i = 0; i != n+1; ++i) std::cout << pref_left[i] << " ";
    std::cout << "\n";
    for (int i = 0; i != n+1; ++i) std::cout << pref_right[i] << " ";
    std::cout << "\n";*/
    for (int i = 0; i != n; ++i){
        if (pref_left[i] == pref_right[i + 1]){
            std::cout << i;
            fl = 1;
            break;
        }
    }
    if(!fl) std::cout << -1;
    delete [] days; delete [] pref_left; delete [] pref_right;
    return 0;
}