#include <iostream>

int euclid(int a, int b){
    while (a > 0 and b > 0 and a != b){
        if (a > b) a %= b;
        else b %= a;
    }
    if (a >= b) return a;
    return b;

}

int main(){
    int a, b; std::cin >> a >> b;
    std::cout << euclid(a, b);
    return 0;
}