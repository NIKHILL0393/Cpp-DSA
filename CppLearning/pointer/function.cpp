#include<iostream>
using namespace std ;
void print(int*p){
    cout<< *p <<endl;
}
void update (int*p){
    //p=p+1;
    *p=*p+1;

}
int getSum(int *arr,int n){
    cout<<endl<<"size :"<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }
    return sum;
}
int main(){
    int value=10;
    int *p=&value;

    print(p);
    cout<<"before "<< *p<< endl;
    update(p);
    cout<<"after "<< *p <<endl;

    int arr[4]={3,7,0,8};

    cout<<"sum is "<< getSum(arr,4)<< endl;
    return 0;
}