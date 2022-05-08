#include<iostream>

using namespace std;


double volume(double a){
   return (a * a * a);
}


int main(){

   double side;
    cout<<"Input the side of a cube"<<endl;
    cin>>side;
   cout<< "volume of cube is: "<<volume(side)<<endl;
   return 0;
}