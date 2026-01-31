#include <iostream> 
using namespace std; 
 
 void tukar(int &x,int &y){ // parameter untuk passing by reference*/ 
    int temp; 
    temp=x; 
    x=y; 
    y=temp; 
}
  
int main(){ 
    int a=5; 
    int b=10; 
  
    cout<<"a sebelum ditukar = "<<a<<endl; 
    cout<<"b sebelum ditukar= "<<b<<endl; 
 
    tukar(a,b); 
     
    cout<<"a setelah fungsi tukar = "<<a<<endl; 
    cout<<"b setelah fungsi tukar = "<<b<<endl; 
  
    return 0; 
} 
  


