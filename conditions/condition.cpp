#include<iostream>

using namespace std;

int main(){
    cout<<"Hello World"<<endl;

    int demo = 9;

    if(demo < 9){
        cout<<"1st Statement"<<endl;
    }
    else if (demo ==9){
        cout<<"2nd Statement"<<endl;
    }
    else{
        cout<<"3rd Statement"<<endl;
    }

    char t = 'a';
    
    switch(t){
        case 'a':
            cout<<"a"<<endl;
        case 'b':
            cout<<"b"<<endl;
            break;
        default :
            cout<<"other"<<endl;
    }
    return 0;
}