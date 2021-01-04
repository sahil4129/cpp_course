#include<iostream>

using namespace std;

int main(){
    cout<<"Hello World"<<endl;

    int demo = 5;

    // while(demo > 0){
    //     cout<<"loop running"<<endl;
    //     cout<<demo<<endl;
    //     demo--;
    // }

    // do {
    //     cout<<"loop running"<<endl;
    //     demo++;
    // }while(demo>5);

    // for(int i=0;i<5;i++){ 
    //     if(i==2){
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }
    for(int i=0;i<5;i++){ 
        for(int j=0;j<i;j++)
        {
            cout<<i<<" "<<j<<endl;
        }
    }
    return 0;
}