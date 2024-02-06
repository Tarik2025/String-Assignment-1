#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string of length less than 10: ";
    cin >> str;

    int result = 0;
    int multiplier = 1;

    
    for (int i = str.length() - 1; i >= 0; i--) {
        
        if (str[i] >= '0' && str[i] <= '9') {
            
            int digit = str[i] - '0';

            
            result += digit * multiplier;

            
            multiplier *= 10;
        } else {
            cout << "Invalid input! Please enter a valid integer string." << endl;
            return 1; 
        }
    }

    cout << "Integer value: " << result << endl;

    return 0;
}

