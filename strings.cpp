# include <iostream>
using namespace std;

int main(){
    string a = "arka";
    cout << a[1] << endl; // will print out r
    // find size of a string
    cout << a.size()<< endl; // prints out teh total number of characters in a and the index
    a[a.size()-1]= 'm'; // replaces the last a in arka and makes it arkm, also this is just a character so single quotes
    cout << a<< endl;
    return 0;
}