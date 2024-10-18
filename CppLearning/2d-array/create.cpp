#include<iostream>
using namespace std;

int main(){
    int arr[3][3]={{1,11,11},{2,22,222},{3,33,333}};

    // for(int row=0;row<3;row++){
    //     for(int col=0;col<3;col++){
    //         cin>>arr[row][col];
    //     }
    // }
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col]<< " ";
        }
        cout<<endl;
    }
    return 0;
}