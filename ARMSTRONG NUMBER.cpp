#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int n){
    int original=n,sum=0;
    while(n>0){
    int digit= n%10;
    sum+=digit*digit*digit;
    n/=10;
    }
    return sum==original;
}
int main(){
    int n;
    cout<<"Enter a NO:";
    cin>>n;
    if(isArmstrong(n))
    cout<<n<<"is an Armstong number."<<endl;
    else
    cout<<n<<"is not an Armstrong number."
    <<endl;
    
    return 0;
}