#include<iostream>
using namespace std ;
void update(int **ptr2){
   //ptr2 = ptr2 +1;
    //no
    
    //*ptr2 =*ptr2 + 1;
    //yes

     **ptr2 = **ptr2 +1;
    //yes

}
int main(){
    int i = 10;
    int *ptr = &i;
    int **ptr2 = &ptr;
    
    cout<<"before "<<i<<endl;
    cout<<"before "<<ptr<<endl;
    cout<<"before "<<ptr2<<endl;
    update(ptr2);
    cout<<"after "<<i<<endl;
    cout<<"after "<<ptr<<endl;
    cout<<"after "<<ptr2<<endl;

    return 0;
}