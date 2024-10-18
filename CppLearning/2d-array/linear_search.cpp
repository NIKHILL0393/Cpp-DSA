#include<iostream>
using namespace std;
bool isPresent(int arr[][3],int target,int row,int col){
for(int row=0;row<3;row++){
    for(int col=0;col<3;col++){
        if(arr[row][col]==target){
            return 1;
        }
    }
}
    return 1; 
}

int main(){
    int arr[3][3];
    //int arr[3][3]={{1,11,11},{2,22,222},{3,33,333}};

    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col]<< " ";
        }
        cout<<endl;
    }
    cout<<"enter the element to search"<< endl;
    int target;
    cin>>target;

    if(isPresent(arr,target,3,4)){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element  not found"<<endl;
    }
    return 0;
}