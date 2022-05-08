#include<iostream>

using namespace std;

int main(){

    int arr1 [5] = {23,24,26,27,30} ;

    int arr2[3][2]= {{0,1}, {2,3}, {4,5}};
    // int arr3[3][4][4];
    // cout<<arr1[0]<<endl;
    // cout<<arr1[7]<<endl;


    for(int i=0;i<6;i++)
    {
        //cout<<arr1[i]<<endl;
    }

    // cout<<sizeof(arr1)<<endl;
    // cout<<sizeof(arr1[1])<<endl;

    // for(int i=0;i<6;i++)
    // {
    //     cout<<&arr1[i]<<endl;
    // }
    //cout<<"size of array "<<sizeof(arr1)/sizeof(arr1[1])<<endl;


    //cout<<arr2[0][0]<<endl;

  for (int i = 0; i < 3; i++) { 
	    for (int j = 0; j < 2; j++) { 
	        cout << arr2[i][j]<<endl; 
	    } 
        cout<<" loop end"<<endl;
	}

    
}