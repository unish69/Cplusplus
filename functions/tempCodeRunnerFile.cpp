#include<iostream>
using namespace std;

//defining the default arguments

void display(char c='*', int count = 3){
    for(int i=1; i<=count; ++i){
        cout<<c;
    }
}

int main(){
    int count = 5;

    cout << "NO ARGUMENT PASSED: "<<endl;
    display();

    cout<<"FIRST ARGUMENT PASSED: "<<endl;
    display('5');

    cout<<"BOTH ARGUMENT PASSED: "<<endl;
    display('$', count);

    return 0;

}