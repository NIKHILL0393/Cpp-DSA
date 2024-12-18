#include<iostream>
#include<string>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a'&& ch<='z')
     return ch;
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}
bool checkPalindrome(char a[],int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        if(toLowerCase(a[s]) != a[e])
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getLength(char name[]){
  int count = 0;
  for(int i=0;name[i] != '\0'; i++)
  {
    count++;
  }
  return count;
}
char getMaxOccCharacter(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }
    int maxi = -1,ans=-1;
    for(int i=0;i<26;i++){
        if(maxi <arr[i]){
            ans = i;
            maxi =arr[i];
        }
    }
    char finalAns = 'a'+ans;
    return finalAns;
}
int main( ){
    string s; 
    cin>> s; 
    cout<<getMaxOccCharacter(s)<<endl;
  return 0;
}