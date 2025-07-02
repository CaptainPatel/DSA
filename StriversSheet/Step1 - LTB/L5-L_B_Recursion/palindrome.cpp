#include<bits/stdc++.h>
using namespace std;

// A string can consist of only lowercase letters. 
bool palindrome(string str) {
    int str_size = str.length();
    int left = 0, right = str_size - 1;
    while(left < right) {
        while(!isalnum(str[left]) && left < right) {
            left++;
        }while(!isalnum(str[right]) && left < right) {
            right--;
        }if(left<right && tolower(str[left]) != tolower(str[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// Function to check if charcters are alphanumeric
bool isalnum(char &c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}


int main(){
    string s = "hakanoodle ;) - s - ^ eldoonakah";
    // Check if the string is a palindrome
    if(palindrome(s)) {
        cout << "Palindrome\n";
    } else {
        cout << "Not a Palindrome\n";
    }
    return 0;
}