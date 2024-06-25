#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;
int fibo(int n){
    if(n <= 1){
        return n;
    }else return fibo(n-1) + fibo(n-2);
}
int main() {
    auto start = high_resolution_clock::now();
    int n; cin>>n;
    cout << fibo(n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << endl<< "Waktu eksekusi: " << duration.count() << " mikrodetik" << endl;
    return 0;
}

