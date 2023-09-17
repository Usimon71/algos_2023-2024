#include <iostream>

int main(){
    int t; std::cin >> t;
    for (int i = 0; i != t; ++i){
        int n; std::cin >> n;
        int down_border = 15;
        int up_border = 30;
        for (int j = 0; j != n; ++j){
            char str[10];
            for (int k = 0; k != 2; ++k) std::cin >> str[k];
            int cur_bord; std::cin >> cur_bord;
            if (str[0] == '>'){
                if (cur_bord > 14 and cur_bord > down_border){
                    down_border = cur_bord;
                }
                
                if (down_border > up_border){
                    std::cout << -1 << std::endl;
                }
                else{
                    std::cout << down_border << std::endl;
                }
            }
            else{
                up_border = cur_bord < up_border ? cur_bord : up_border;
                if (up_border < down_border){
                    std::cout << -1 << std::endl;
                }
                else{
                    std::cout << down_border << std::endl;
                }
            }
        }
        
    }
    return 0;
}