#include<iostream>
#include<string>
using namespace std;
// int main()
    // named structure
    struct  car{
        int model;
        string name;
        string company;
    };
    // myCar1,myCar2;
    int main(){
    // first structure
    car myCar1;
    myCar1.model=2019;
    myCar1.name="kia";
    myCar1.company="renault";
    
    // second structure
    car myCar2;
    myCar2.model=2022;
    myCar2.name="nexon";
    myCar2.company="tata";

    cout<<myCar1.model<<" "<<myCar1.name<<" "<<myCar1.company <<"\n";
    cout<<myCar2.model<<" "<<myCar2.name<<" "<<myCar2.company<<"\n";
    return 0;
}
