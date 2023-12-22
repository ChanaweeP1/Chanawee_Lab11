#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(){
    int i;
    string grade [] = {"A", "B+","B","C+","C","D+","D","F","W"}; 
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    i = rand() % 9 ;
    cout << "You will get "<<grade[i]<<" in this 261102.";

    return 0 ;
}
