#include "infixpostfix.h"
#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    string expression1 = "";
    string expression2 = "";
    
    cout << "Enter expression : ";
    getline(cin, expression1);
    double result1 = Evaluate(expression1);
    getline(cin, expression1);
    double result2 = Evaluate(expression1);
    
    if(result1==result2){
        cout<<"true";
    }
    else{
        cout<<"False";
    }
    return 0;
}
