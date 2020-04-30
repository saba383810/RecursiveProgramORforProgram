#include<iostream>
#include <chrono>

int main ()
{
    using namespace std;
    chrono::system_clock::time_point start, end;

    start = chrono::system_clock::now();

    //以下メイン処理

    for (int i = 0;i<100;i++){
        for (int j = 0; j < i; j++) std::cout << "*" ;
    std::cout << std::endl;   
    }
    
    //メイン処理終了

    end = chrono::system_clock::now();

    double time = static_cast<double>(chrono::duration_cast<chrono::microseconds>(end - start).count() / 1000.0);
    printf("time %lf[ms]\n", time);

    return 0;
}
