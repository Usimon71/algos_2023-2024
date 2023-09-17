#include <iostream>

int main(){
    int n; std::cin >> n;
    int* flats = new int[n*2];
    for (int i = 0; i != n; ++i){
        int x; std::cin >> x;
        flats[i] = flats[i+n] = x;
    }

    int count = 0;
    int ptr = flats[0];

    for (int i = 1; i != n*2; ++i){
        if ((ptr&flats[i]) != 0){
            ++count;
            ptr = flats[i];
        }
        else ptr += flats[i];
    }
    std::cout << (count+1)/2;
    delete [] flats;
    
    return 0;
}