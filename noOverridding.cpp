#include<iostream>
using namespace std;
class baseClass{
    public:
        virtual void perkenalan() final{
            cout << "Hallo saya fuction dari base class" <<endl;
        }
};
class derivedClass:public baseClass{
    public:
        void perkenalan1(){
            cout << "Hallo saya fuction dari derived class" <<endl;
        }
};
int main(){
    derivedClass a;
    a.perkenalan1();
    return 0;
}