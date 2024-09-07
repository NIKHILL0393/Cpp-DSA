#include<iostream>
using namespace std;
bool search(int arr[],int size, int key){
    for(int i=0;i<size;i++)
    if(arr[i]=key){
        return 1;
    }
    return 0;
}
int main(){
    int arr[5]={3,6,2,8,0};
    cout<<"enter element to search for"<<endl;
    
    int key;
    cin>>key;
    
    bool found = search (arr,5,key);
    if(found){
        cout<<"key is present in array"<<endl;
    }
    else{
        cout<<"key is not present in array"<<endl;
    }
    return 0;
}