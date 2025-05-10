#include<iostream>

using namespace std; 
int main(){
// int mark[4]={23,45,55,65};
// cout<<mark[0]<<endl;
// cout<<mark[1]<<endl;
// cout<<mark[2]<<endl;
// cout<<mark[3]<<endl;
int marks[]={23,45,55,65};
int mathmarks[4];
mathmarks[0]=2234;
mathmarks[1]=3234;
mathmarks[2]=4234;
mathmarks[3]=5234;
cout<<"this are mathmarks"<<endl;
cout<<mathmarks[0]<<endl;
cout<<mathmarks[1]<<endl;
cout<<mathmarks[2]<<endl;
 cout<<mathmarks[3]<<endl;
 cout<<marks[0]<<endl;
 cout<<marks[1]<<endl;
 cout<<marks[2]<<endl;
cout<<marks[3]<<endl;
int*p=marks;
cout<<"the value of marks[0] is"<<*p<<endl;
cout<<"the value of marks[1] is"<<*p+1<<endl;
cout<<"the value of marks[2] is"<<*p+2<<endl;
cout<<"the value of marks[3] is"<<*p+3<<endl;
return 0;
}