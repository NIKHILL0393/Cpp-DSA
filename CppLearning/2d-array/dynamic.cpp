#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int row;
    cin>>row;

    int col;
    cin>>col;


    // create 2d array
    int ** arr=new int*[row];
    for(int i=0;i<n;i++){
       arr[i]=new int [col];
    }
    //input
    for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
           cin>>arr[i][j];
       }
    }
    //output
    cout<<endl;
    for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
           cout<<arr[i][j]<<" ";
       }cout<<endl;
    }
    //release memory
     for(int i=0;i<row;i++){
       delete[] arr[i];
    }
    delete[]arr;

    return 0;
}