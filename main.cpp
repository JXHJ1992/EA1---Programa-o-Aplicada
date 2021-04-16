#include <iostream>
#include <string>
using namespace std;


int main() {
string P;

 cout << "Digite uma palavra de no maxímo 50 caracteres" << endl;
 cin >> P;

 if(P.length() > 49){
   cout <<" sua pavavra foi limitada em 50 caracteres"<< endl;
   P.erase(49);
 }
 cout << " Sua Palavra é : " << P << endl;


}