#include<bits/stdc++.h>
using namespace std;
void ending();
void patterns();
int main(){
    patterns();
    return 0;   
}
void patterns(){
    int n;
    cout<<"Enter a number:- ";
    cin >> n ;

    cout << "\n";
    // #1 Square / Rectangle
    cout << "Square / Rectangle:- \n";
    cout << "\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "*";
        }
        cout << "\n";
    } 

    cout << "\n";
    cout << "\n";

    // #2 Right angle triangle 
    cout << "Right angle triangle:- \n";
    cout << "\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << "*";
        }
        cout << "\n";
    } 

    cout << "\n";
    cout << "\n";

    // #3
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << j+1;
        }
        cout << "\n";
    } 

    cout << "\n";
    cout << "\n";

    // #4
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << i+1;
        }
        cout << "\n";
    } 

    cout << "\n";
    cout << "\n";

    // #5
    cout << "\n";
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            cout << "*";
        }
        cout << "\n";
    } 

    cout << "\n";
    cout << "\n";

    // #6(i)
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            cout << (n-(j-1)-i);
        }
        cout << "\n";
    } 

    cout << "\n";
    cout << "\n";

    // #6(ii)
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            cout << (n-i);
        }
        cout << "\n";
    } 

    cout << "\n";
    cout << "\n";

    // #7 Pyramid 
    cout << "Pyramid :-\n";
    cout << "\n";
    for(int i=0;i<n;i++){
        for(int j=(n-1)-i;j>0;j--){
            cout << " ";
        }
        for(int k=1;k<=(2*i)+1;k++){
            cout << "*";
        }
        cout << "\n";
    } 

    cout << "\n";
    cout << "\n";

    // #8
    for(int i=0;i<n;i++){
        for(int j=i;j>0;j--){
            cout << " ";
        }
        for(int k=1;k<=(2*(n-i-1))+1;k++){
            cout << "*";
        }
        cout << "\n";
    } 

    cout << "\n";
    cout << "\n";


    // #9 Diamond
    cout << "Diamond :-\n";
    cout << "\n";
    for(int i=0;i<n;i++){
        for(int j=(n-1)-i;j>0;j--){
            cout << " ";
        }
        for(int k=1;k<=(2*i)+1;k++){
            cout << "*";
        }
        cout << "\n";
    } 
    for(int i=0;i<n;i++){
        for(int j=i;j>0;j--){
            cout << " ";
        }
        for(int k=1;k<=(2*(n-i-1))+1;k++){
            cout << "*";
        }
        cout << "\n";
    } 
    cout << "\n";
    cout << "\n";

    // #10 others
    cout << "others:-\n";
    cout << "\n";
    for(int i=0;i<n-1;i++){
        for(int j=0;j<i+1;j++){
            cout << "*";
        }
        cout << "\n";
    }  
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            cout << "*";
        }
        cout << "\n";
    } 
    cout << "\n";
    cout << "\n";

    // #11
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if((i+j)%2==0){cout << "1";}
            else{cout << "0";}
        }
        cout << "\n";
    } 

    cout << "\n";
    cout << "\n";


    // #12
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<(i+1)){
                cout<<j+1;
            }
            else{
                cout<<" ";
            }
        }
        for(int k=n;k>0;k--){
            if(k<=(i+1)){
                cout<<k;
            }
            else{
                cout<<" ";
            }
        }
        cout << "\n";
    } 

    cout << "\n";
    cout << "\n";

    // #13
    cout << "\n";
    int flag=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << flag<<" ";
            flag++;
        }
        cout << "\n";
    } 

    cout << "\n";
    cout << "\n";

    // #14
    cout << "\n";
    char cflag='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << cflag;
            cflag++;
        }
        cflag='A';
        cout << "\n";
    } 

    cout << "\n";
    cout << "\n";

    // #15
    cout << "\n";
    char c2flag='A';
    for(int i=0;i<n;i++){
        for(int j=(n-i);j>0;j--){
            cout << c2flag;
            c2flag++;
        }
        c2flag='A';
        cout << "\n";
    } 

    cout << "\n";
    cout << "\n";

    // #16
    cout << "\n";
    char c3flag='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << c3flag;
        }
        c3flag++;
        cout << "\n";
    } 

    cout << "\n";
    cout << "\n";

    // #17
    cout << "\n";
    char c4flag='A';
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<c4flag;
            c4flag++;
        }
        c4flag--;
        for(int l=0;l<i;l++){
            c4flag--;
            cout<<c4flag;
        }
        c4flag='A';
        cout << "\n";
    } 

    cout << "\n";
    cout << "\n";


    // #18
    cout << "\n";
    char c5flag='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)>=n-1){
                cout<<c5flag;
            }
            c5flag++;
        }
        c5flag='A';
        cout << "\n";
    } 

    cout << "\n";
    cout << "\n";
    
    // #19
    cout << "\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)<n){
                cout<<"*";
            }
            else{
                cout<<" "; 
            }
        }
        for(int j=0;j<n;j++){
            if(i<=j){
                cout<<"*";
            }
            else{
                cout<<" "; 
            }
        }
        cout << "\n";
    } 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
                cout<<"*";
            }
            else{
                cout<<" "; 
            }
        }
        for(int j=0;j<n;j++){
            if((i+j)>=(n-1)){
                cout<<"*";
            }
            else{
                cout<<" "; 
            }
        }
        cout << "\n";
    } 

    cout << "\n";
    cout << "\n";
    
    // #20
    cout << "\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
                cout<<"*";
            }
            else{
                cout<<" "; 
            }
        }
        for(int j=0;j<n;j++){
            if((i+j)>=(n-1)){
                cout<<"*";
            }
            else{
                cout<<" "; 
            }
        }
        cout << "\n";
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)<n){
                cout<<"*";
            }
            else{
                cout<<" "; 
            }
        }
        for(int j=0;j<n;j++){
            if(i<=j){
                cout<<"*";
            }
            else{
                cout<<" "; 
            }
        }
        cout << "\n";
    }  

    cout << "\n";
    cout << "\n";

    // #21
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==(n-1) || j==0 || j==(n-1) ){
                cout<<"*";
            }
            else{
                cout<<" "; 
            }
        }
        cout << "\n";
    }
    cout << "\n";
    cout << "\n";

    // #22
    for(int i=0;i<(2*n)-1;i++){
        for(int j=0;j<(2*n)-1;j++){              
             // Initialising the top, down, left and right indices of a cell.
             int top = i;
             int left = j;
             int right = (2*n - 2) - j;
             int bottom = (2*n - 2) - i;
             
             // Min of 4 directions and then we subtract from n
             // because previously we would get a pattern whose border
             // has 0's, but we want with border N's and then decreasing inside.
             cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
        }
        cout << "\n";
    }
    cout << "\n";
    cout << "\n";
    ending();
}
void ending(){
    char c;
    cout<<"Enter '1' to Run again or enter any other character to end the program:- ";
    cin>>c;
    if(c=='1'){
        patterns();
    }
}