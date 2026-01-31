#include <iostream>
using namespace std;

int main() {
	
    for (int i = 1; i <= 5; i++) {          // loop baris
        int faktorial =1 ;        
        for(int j=1; j <= i; ++j){
        	 faktorial *= j;
        }
       cout<<i<<"!= "<<faktorial<<endl;                   
    }
    
    return 0;
}

