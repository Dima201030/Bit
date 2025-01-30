#include <iostream>
using namespace std;

int main() {
    int countOperations, x = 0;
    
    
    cin >> countOperations;
    while (countOperations--) {  
        string str;
        cin >> str;
        x += (str[1] == '+') ? 1 : -1; 
    }
    
    cout << x << endl;
    return 0;
}
