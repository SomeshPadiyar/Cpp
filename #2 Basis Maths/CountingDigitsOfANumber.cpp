#include<bits/stdc++.h>
using namespace std;
void CountDigit();
void ending();
int main(){
    CountDigit();
    return 0;
}
 void CountDigit(){
    cout<<"Enter an Integer:- ";
    int n;
    cin>>n;
    if(n==0){
        cout<<"Number of digits are:- 1.\n";
	ending();
        return;
    }
    int flag=0;
    while(n!=0){
        n/=10;
        flag++;
    }
    cout<<"Number of digits are:- "<<flag<<".\n";
    ending();
}
void ending(){
    char c;
    cout<<"Enter '1' to Run again or enter any other character to end the program:- ";
    cin>>c;
    if(c=='1'){
        CountDigit();
    }
}