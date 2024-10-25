#include<iostream>
using namespace std;
void print(int arr[],int n,int start=0){
    for(int i =start;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[4]={1,3,6,2};
    int size=4;

    print(arr,size);
    cout<<endl;
    print(arr,size,1);
    return 0;
}
