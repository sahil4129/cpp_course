#include<iostream>

using namespace std;

int main(){

    int a=5;
    int b =10;
    int c=9,d=7,e=0;
    bool g = true, f = true;
    cout<<"Arithmetic Operators"<<endl;
    cout<<a+b<<endl;
    cout<<b-a<<endl;
    cout<<a*b<<endl;
    cout<<b/a<<endl;
    cout<<9%5<<endl;
    cout<<a++ <<a<<endl;
    cout<<++c<<c<<endl;    // a++ -> a=a+1
    cout<<b--<<b<<endl;
    cout<<--d<<d<<endl;    // b-- -> b= b-1
    cout<<"Relational Operators"<<endl;
    cout<<g<<endl;

    g = a==b;
    cout<<g<<endl;       
    
    /* this is multiline comment

        0 -> false , 1->true
    */

    g = a<=b;
    cout<<g<<endl;

    g= a>=b;
    cout<<g<<endl;

    g = a!=b;
    cout<<g<<endl;

    cout<<"Logical Operators"<<endl;
    f = a==b && a<=b;
    cout<<f<<endl;

    f = a==b || a<=b;
    cout<<f<<endl;

    f = !(a==b && a<=b);

    cout<<f<<endl;

    cout<<"Bitwise Operator"<<endl;
    
    e = 5&9;
    cout<<e<<endl;
    e= 5|9;
    cout<<e<<endl;
    e= 5^9;
    cout<<e<<endl;
    e= ~5;
    cout<<e<<endl;
    e= 9<<1;
    cout<<e<<endl;
    e= 9>>1;
    cout<<e<<endl;

    return 0;
}