#include<iostream>

using namespace std;

void myfunction(){
    cout<<"First Functions"<<endl;
}


int function2(){
    cout<<"second function"<<endl;
    return 3;
}

string function3(){
    return "Third Function";
}

void  Age( int age =18){
    cout<<"your age is "<<age<<endl;
}

string nameEnters( string name = "demo"){
    return "Hello " + name;
}



void countryName1 ( string country){
        country="India";
        cout<<"Inside function "<<country;
}

void countryName2 ( string &country){
        country="India";
        cout<<"Inside function "<<country;
}


int sumAdd(int a)
{
    int b=9;
    cout<<"first one"<<endl;
   cout<<a+b<<endl; 
}

int sumAdd(int a,int b)
{
    
    cout<<"second one"<<endl;
   cout<<a+b<<endl; 
}

double sumAdd(double a , double b)
{
     cout<<"third one"<<endl;
   cout<<a+b<<endl; 
}


int main(){

    //int g=9;
    // cout<<"Hello World"<<endl;
    // cout<<g<<endl;
    // myfunction();
    // //cout<<function2()<<endl;

    // g= function2();
    // cout<<g<<endl;
    // cout<<function3()<<endl;
    
    //////////////////////////////////////

    // cout<<nameEnters()<<endl;
    // cout<<nameEnters("Abhi")<<endl;
    // Age();
    // Age(65);


    //////////////////////////////////


    string country = "Norway";


    // countryName1(country);                         // pass by value
    // cout<<endl;
    // cout<<"outside functions "<<country<<endl;


    // countryName2(country);
    // cout<<endl;
    // cout<<"outside functions "<<country<<endl;

     sumAdd(3);
    sumAdd(7,4);
     sumAdd(11.6,1.4);
    return 0;
}