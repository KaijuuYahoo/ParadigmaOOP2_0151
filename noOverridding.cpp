#include<iostream>
using namespace std;
class baseClass{
    public:
        virtual void perkenalan(){
            cout << "Hallo saya fuction dari base class" <<endl;
        }
};
class derivedClass:public baseClass{
    public:
        void perkenalan(){
            cout << "Hallo saya fuction dari derived class" <<endl;
        }
};
int main(){
    derivedClass a;
    a.
}