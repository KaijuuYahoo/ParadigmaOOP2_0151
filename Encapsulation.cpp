#include<iostream>
using namespace std;
class remoteLampu{
    private:
        string saklarNo[10];
    
    public : 
        void setsaklarNo(int i, string value){
            saklarNo[i] = value;
        }
        string getsaklarNo(int i){
            return saklarNo[i];
        }      
};
int main()
{
    remoteLampu lampuRumah;
    lampuRumah.setsaklarNo(1, "Lampu Teras Rumah");
    lampuRumah.setsaklarNo(2, "Lampu Ruang Tamu");
    lampuRumah.setsaklarNo(3, "Lampu Kamar Tidur");
    lampuRumah.setsaklarNo(4, "Lampu Dapur");

    cout << lampuRumah.getsaklarNo(1) <<endl;
    lampuRumah.getsaklarNo(2) <<endl;;
    lampuRumah.getsaklarNo(3);
    lampuRumah.getsaklarNo(4);
    return 0;
}
