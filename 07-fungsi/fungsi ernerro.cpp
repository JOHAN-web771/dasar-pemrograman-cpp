#include <iostream>
#include <cerrno>
using namespace std;



int main() {
    errno = 0;
    if (errno == 0)
	
        cout << "Tidak ada error\n";
    
    return 0;
}

