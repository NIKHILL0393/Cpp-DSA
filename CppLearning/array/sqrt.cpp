#include<iostream>
using namespace std;

long long int sqrtInteger(int n) {
        int s=0;
        int e=n;
        long long int mid=s+(e-s)/2;
        long long int ans=-1;
        while(s<=e){
            long long int square=mid*mid;
            
            if(square==n)
                return mid;

            if(square<n){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
double morePrecision(int n,int precision,int tempSolution){
    double factor=1; 
    double answer=tempSolution;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=answer;j<n;j=j+factor){
            answer=j;
        }
    }   
    return answer;
}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int tempSolution=sqrtInteger(n);
    cout<<"answer is "<<morePrecision(n,3,tempSolution)<<endl;
    return 0;
}
