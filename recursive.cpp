#include <iostream>
#include <chrono>

int i = 0;

void Func()
{
    for(int j =0;j<i;j++) std::cout << "*";
    std::cout<<std::endl;
    i++;
    if(i < 100)
        Func();
}

int main()
{
    std::chrono::system_clock::time_point start, end;

    start = std::chrono::system_clock::now();

    //以下メイン処理

    Func();

    //メイン処理終了

    end = std::chrono::system_clock::now();

    double time = static_cast<double>(std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() / 1000.0);
    printf("time %lf[ms]\n", time);

    return 0;
}