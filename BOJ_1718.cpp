#include <iostream>

using namespace std;

int main() {
    string a;
    string b;
    int c,d;
    string result;

    getline(cin,a);
    getline(cin,b);

    for(int i=0;i<a.length();i++){
        c = a[i];
        d = b[i%b.length()]-96;
        if(c==32){
            result = ' ';
            cout << result;
        }
        else{
            if(c-d<97){
                result = 123-(97-(c-d));
            }

            else{
                result = c-d;
            }

            cout << result;
        }
    }

}