#include<iostream>
using namespace std;
int power(int a,int b){
   int answer = 1;
   for(int i=1;i<=b;i++){
        answer = answer * a;
   }
    return answer;
}
int main(){
    int a,b;
    cin >> a >> b;
    int ans = power(a,b);
    cout << "answer is" << ans << endl;

    int c,d;
    cin >> c >> d;
    ans = power(c,d);
    cout << "answer is" <<  ans << endl;
}