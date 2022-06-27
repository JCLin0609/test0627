#include<iostream>
using namespace std;

void testfunc2(int i){
    while(i>0){
        cout << "Hello world." << endl;
        i--;
    }
    return;
}

int main(){
    int num=5;
    testfunc2(num);
    return 0;
}