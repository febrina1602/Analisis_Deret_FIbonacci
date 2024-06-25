#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;
class fibonacci{
    private:
    deque <long long unsigned int> arr;
    int n;
    public:
    fibonacci(){
        arr.push_back(0);
        arr.push_back(1);
        n = 2;
    }

    void genfibo(int n){
        if(this -> n < n){
            for(int i = this -> n; i <= n; i++){
            arr.push_back(arr[i-1] + arr[i-2]);
            }
            this -> n = n;
        }
    }
    
    long long unsigned int getFibo(int n){
        genfibo(n);
        return arr[n];
    }

};
int main() {
    auto start = high_resolution_clock::now();
    int n; cin>>n;
    fibonacci fibo;
    fibo.genfibo(n);
    cout << fibo.getFibo(n) << endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << endl<< "Waktu eksekusi: " << duration.count() << " mikrodetik" << endl;
    return 0;
}

