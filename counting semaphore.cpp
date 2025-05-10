#include<iostream>
#include<thread>
#include<semaphore>
using namespace std;
counting_semaphore<2> sem(2);
void print(int id){
    sem.acquire();
    cout<<id;
    sem.release();
}
int main(){
    thread t1(print,1);
    thread t2(print,2);
    t1.join();
    t2.join();
    return 0;
}

