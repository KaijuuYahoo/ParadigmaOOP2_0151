#include<iostream>
using namespace std;

class AbstraksiKlas{
    private :
        string x,y;
    public :
        //Method Untuk mengisi nilai
        //Private member

        void setXY(string a, string b){
            x = a;
            y = b;
        }
        //Menampilkan Nilai
        void display (){
            cout << "x = " << x <<endl;
            cout << "y = " << y <<endl;            
        }
   
};
