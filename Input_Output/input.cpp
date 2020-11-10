#include<iostream>

using namespace std;

int main()
{
    string str;
    int age;
    float marks;
    cout<<"enter your name " <<endl;
    getline(cin,str);
    cout<<"enter your age" <<endl;
    cin>>age;                           //input from user
    cout<<"enter your marks"<<endl;
    cin>>marks;
    cout<<str<<endl;                    // output to user
    cout<<age<<endl;
    cout<<marks<<endl;
    return 0;
}