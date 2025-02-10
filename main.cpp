#include<iostream>
#include<string>
using namespace std;
class teacher{
    public:
    string name;
    string fathername;
    string mothername;
};

int main(){
teacher t;
t.name="ravi";
t.fathername="binod kumar singh";
t.mothername="meera devi";
cout<<t.name<<" \n     "<<t.fathername<<" \n   "<<t.mothername<<endl;
    return 0;
}