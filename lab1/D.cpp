#include <iostream>

int main(){
    int n , m, q; std::cin >> n >> m >> q;
    int** tv_show  = new int*[n];
    for (size_t i = 0; i != n; ++i){
        tv_show[i] = new int[m];
    }
    for (size_t i = 0; i != n; ++i){
        for (size_t j = 0; j != m; ++j){
            tv_show[i][j] = 0;
        }
    }
    int k = n*m;
    for (int serii = 0; serii != q; ++serii){
        int e, s; std::cin >> e >> s;
        if (tv_show[s-1][e-1] == 0){
            tv_show[s-1][e-1] = 1;
            --k;
        }
    }
    std::cout << k << "\n";
    for (size_t i = 0; i != n; ++i){
        for (size_t j = 0; j != m; ++j){
            if (tv_show[i][j] == 0){
                std::cout << j+1 << " " << i + 1 << "\n";
            }
        }
    }
    for (size_t i = 0; i != n; ++i){
        delete [] tv_show [i];
    }
    delete [] tv_show;
    

    return 0;
}