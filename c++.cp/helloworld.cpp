// hello.cpp
#include <iostream>
int main() {
    using namespace std;
    int age=4,rank;
    string name;
    cout<<"what's your rank?";
    cin>>rank;
    cout<<"what's your name?";
    getline(cin>>ws,name);  

    cout << "Hello, " << name << "! You are " << age << " years old."<<endl;
    cout<<"RANK="<< rank;
    return 0;
}
 