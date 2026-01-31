#include <iostream>
using namespace std;

void reverse(string s){
    if(s == "") return;
    reverse(s.substr(1));
    cout << s[0];
}

int main(){
    reverse("halo");
}
