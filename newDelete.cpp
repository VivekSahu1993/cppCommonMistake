#include<iostream>
#include<memory>

using namespace std;

class A
{
public:
A(){
cout<<"Const"<<endl;
}

~A(){
cout<<"Destr"<<endl;
}
};

int main(){

unique_ptr<class A> p(new class A);
//A *p= new A();

//delete p;

return 0;
}

//g++ -std=c++11 p1.cpp
