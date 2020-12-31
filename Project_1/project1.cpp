#include<iostream>

using namespace std;

int main()
{
    double numOne, numTwo, res;
    int choice;

    do
    {
        cout<<"------------------------"<<endl;
        cout<<endl;
        cout<<"Welcome to Project 1"<<endl ;
        cout<<endl;
        cout<<" Simple Calculator"<<endl;
        cout<<endl;
        cout<<"------------------------"<<endl;
        cout<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<endl;
        cout<<"Enter Your Choice (1-5): "<<endl;
        cin>>choice;

        if(choice>=1 && choice<=4)
        {
            cout<<"Enter any two Numbers: "<<endl;
            cin>>numOne>>numTwo;
        }

        switch(choice)
        {
            case 1:
                res = numOne + numTwo;
                cout<<"\nResult = "<<res<<endl;
                break;
            case 2:
                res = (numOne - numTwo);
                cout<<"\nResult = "<<res<<endl;
                break;
            case 3:
                res = (numOne* numTwo);
                cout<<"\nResult = "<<res<<endl;
                break;
            case 4:
                res = (numOne/numTwo);
                cout<<"\nResult = "<<res<<endl;
                break;
            case 5:
                return 0;
            default:
                cout<<"\nWrong Choice!"<<endl;
                break;
        }


    }while(choice!=5);

    cout<<endl;

    return 0;
}