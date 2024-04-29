#include <iostream>
#include <math.h>
using namespace std;
int main(){
    // to find the reverse of a no
    int a ;
    cout<<"enter the no to be reversed - ";
    cin>>a;
    int ans = 0;
    while(a!=0){
        int digit = a%10;
        a /= 10;
        ans = (ans*10) + digit;
    
    }
    if (ans>(pow(2,31)-1)/10){
        cout<<(0)<<endl;
    }
    else if (ans<pow(-2,31)/10){
        cout<<(0)<<endl;
    }
    else {
        cout<<ans<<endl;
    }
    

    // compliment of a no 
    int b ;
    cout<<"enter a no to be complimented - " ;
    cin>>b;
    int po = 1;
    int anss = 0; 
    while(b!=0){
       int no = b%2;
       b /= 2;
       if (no == 1){
          no = 0;
        }
       else {
          no = 1;
        }
        anss = (no * po) + anss;
        po *= 2;
    
    }
    cout<<anss<<endl;

    // can a no repesent in the form of 2
    int c ;
    cout<<"enter a no - ";
    cin>>c;
    int poo = 1;
    for (int i = 0; i<31;i+=1 ){
        if (poo==c){
            cout<<"true";
            break;
        }
        else if (i == 30 && poo != c){
            cout<<"false";
            
        }
        else{
            poo *= 2;
        }

    }


}