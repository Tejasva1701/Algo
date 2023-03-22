//Program 2(b)

#include<iostream>
#include<chrono>
using namespace std;

int main(){
    // Start measuring CPU time
    auto start = chrono::high_resolution_clock::now();
    
    // code
    for (int i = 0; i < 100000; i++){
        cout<<"";#include<iostream>
#include<chrono>
using namespace std;

int main(){
    // Start measuring CPU time
    auto start = chrono::high_resolution_clock::now();
    
    // code
    for (int i = 0; i < 10000; i++){
        cout<<"";
    }
           
    // Stop measuring CPU time
    auto stop = chrono::high_resolution_clock::now();
    
    // Calculate the CPU time
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    double cpu_time = duration.count();
    cout << "CPU Process Time(in microseconds): " << cpu_time;

    return 0;
}
    }
           
    // Stop measuring CPU time
    auto stop = chrono::high_resolution_clock::now();
    
    // Calculate the CPU time
    auto duration = chrono::duration_cast<chrono::nanoseconds>(stop - start);
    double cpu_time = duration.count()/1000000000.0;
    cout << "CPU Process Time(in seconds): "<< cpu_time;

    return 0;
}
