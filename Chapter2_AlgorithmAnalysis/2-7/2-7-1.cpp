#include<bits/stdc++.h>
using namespace std;

const int N = 10000;
const int I = 1;
const int J = 10000;
int Randint(int i, int j){
    return i + rand() % (j - i + 1);
}
// This might be a bad random number, but I don't care about this in this problem.

int main(){
    srand(time(0));
    vector<int> A(N, 0);

    clock_t start = clock();
    for(int i = 0; i < N; i++){
        int tmp;
        tmp = Randint(I, J);
        bool hasAppeared = false;
        for(int j = 0; j < i; j++){
            if(A[j] == tmp){
                hasAppeared = true;
                break;
            }
        }
        if(!hasAppeared){
            A[i] = tmp;
        } 
        else {
            i--;
        }
    }
    clock_t end = clock();

    // Print the result
    for(int i = 0; i < N; i++){
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Time taken: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;

}
