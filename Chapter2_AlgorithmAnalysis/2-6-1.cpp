#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    long long N = 1300000;
    for(int i = 0; i < 8; i++){
        
        // avoid inputting influence time measurement
        clock_t start = clock();
        clock_t end; // using clock_t to measure time

        long long sum = 0;
        for (auto j = 1; j < N; j++)
        {
            sum++;
        }

        end = clock();
        cout << "N = " << N << ", Sum = " << sum << endl;
        cout << "Time: " << (double)(end - start) << " ms" << endl;
        N *= 2;
    }
    return 0;
}