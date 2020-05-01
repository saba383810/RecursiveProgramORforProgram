#include <iostream>
#include <chrono>

int i = 0;
double avg ;


void Func()
{
    for(int j =0;j<i;j++) std::cout << "*";
    std::cout<<std::endl;
    i++;
    if(i < 100)Func();
    else i=0;
}

int main()
{
    double arr[10];
    for (int a=0;a<10;a++){
        std::chrono::system_clock::time_point start, end;

        start = std::chrono::system_clock::now();

        //以下メイン処理

        Func();

        //メイン処理終了

        end = std::chrono::system_clock::now();

        double time = static_cast<double>(std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() / 1000.0);
        arr[a] = time;
    }
    for(int j=0;j<10;j++)
    {
        printf("%d回目time %lf[ms]\n",j+1,arr[j]);
        avg +=arr[j];
    }
    †
    printf("平均:%f",avg/10);
    return 0;
}