#include<iostream>

using namespace std;

int main(){
    #if (__linux__) || (_MSC_VER >=1920)
    cout <<"hh";
    #endif
    cout<<"Hello World"<<endl;
    return 0;
}