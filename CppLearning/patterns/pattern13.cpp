#include<iostream>
using namespace std;
int main(){
    int i,j,n,number=1;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<number;
            number++;
        }
        cout<<endl;
    }
}