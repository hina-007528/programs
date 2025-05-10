#include<iostream>
using namespace std;


struct ubaid{
    int rollnum=23;
    string name;
    char grade;

};


int main(){
    int max_stu=3;
    ubaid s1[max_stu];
    int stucount=0;
    if(stucount<max_stu)
    {
        cout<<"enetr your name:"<<endl;
        getline(cin,s1[max_stu].name);
         cout<<"enetr your roolno:"<<endl;
        cin>>s1[max_stu].rollnum;
        cout<<"enetr your roolno:"<<endl;
        cin>>s1[max_stu].grade;
        stucount++;
    }
    



    
    return 0;
}



