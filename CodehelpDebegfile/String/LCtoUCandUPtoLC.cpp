#include<iostream>
#include<cstring>
using namespace std;
// Change Lower Case to Uppercase
void LCtoUPcase(char arr[] , int size){
    for(int i=0;i<size;i++){
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            arr[i] = arr[i]-'a'+'A';
        }
    }
}
void UPtoLCcase(char arr[] , int size){
        for(int i=0;i<size;i++){
        if(arr[i] >= 'A' && arr[i] <= 'Z'){
            arr[i] = arr[i]-'A'+'a';
        }
    }
}
int main(){
    char arr[50];
    cout<<"Enter Your Charcter: ";
    cin.getline(arr,50);
    LCtoUPcase(arr,50);
    cout<<arr<<endl;
    UPtoLCcase(arr,50);
    cout<<arr;

}



class Solution {
public:
    // Function to convert lowercase letters to uppercase
    string toUpperCase(string s) {

        // Traverse each character of the string
        for (int i = 0; i < s.length(); i++) {

            // Check if character is lowercase
            if (s[i] >= 'a' && s[i] <= 'z') {

                // Convert lowercase to uppercase using ASCII logic
                s[i] = s[i] - 'a' + 'A';
            }
        }

        return s;
    }

    // Function to convert uppercase letters to lowercase
    string toLowerCase(string s) {

        // Traverse each character of the string
        for (int i = 0; i < s.length(); i++) {

            // Check if character is uppercase
            if (s[i] >= 'A' && s[i] <= 'Z') {

                // Convert uppercase to lowercase using ASCII logic
                s[i] = s[i] - 'A' + 'a';
            }
        }

        return s;
    }
};




