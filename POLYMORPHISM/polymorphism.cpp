#include<iostream>
using namespace std;
class AAA{
    public:
virtual void function(){
cout << "AAA's function" << endl;
}
};

class BBB: public AAA{
public:
virtual void function(){
cout << "BBB's function" << endl;
}
};

class CCC : public BBB{
public:
virtual void function(){
cout << "CCC's function" << endl;
}
};

int main(){
AAA *ptr[3];
ptr[0] = new AAA();
ptr[1] = new BBB();
ptr[2] = new CCC();

ptr[0]->function();
ptr[1]->function();
ptr[2]->function();
}