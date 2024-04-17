#include <iostream>

using namespace std;

int main(){

    for(int c = 0; c < 6; c+=3){
        cout <<"Perulangan c ke "<<c<<endl;
        for(int d = 0; d < 2; d++){
            cout<<"\t"<<"Perulangan d ke "<< d <<endl;
        }
        for(int e = 0; e > 10; e++){
            cout<<"\t\t"<<"Perulangan e ke "<< e <<endl;
        }
    }

    return 0;
}