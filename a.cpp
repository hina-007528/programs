#include <iostream>
# include<string>
using namespace std;
struct person{
    string name;
    int age;
    string occupation;

};
int main(){
person person;
cout<<"Enter name";
getline(cin,person.name);
cout<<"Enter age";
cin>>person.age;
cout<<"Person occupation";
getline(cin,person.occupation);
return 0;
}