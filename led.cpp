#include <iostream>
using namespace std;

int main() {
    float x=0, y=0, c=0;
    cout <<"Ingresar valor x:" <<endl;
    cin >>x;

    if(x>0){
        cout <<"Ingresar valor y:" <<endl;
        cin >>y;
        if(y>0){
            c=x/y;
            cout <<"Cuanta corriente circulara a traves del circuito al encenderse? " <<c <<endl;
        } else{
            cout <<"Error" <<endl;
        }
        
    }else {
        cout <<"Error" <<endl;
    }



    return 0;
}


