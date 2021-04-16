#include <iostream>
#include <string>
using namespace std;

int main() {
string v;
 cout << "d" << endl;
 cin >> v;

for( int i =0; i <v.length(); i++){
  if( v[i] == 'a'){
    cout<< "#2=1" << endl;
  } else if (v[i] == 'b'){
    cout << "#2 = 2" << endl;
  }else if ( v[i] == 'c'){
    cout <<"#2=3";
  }

}


}