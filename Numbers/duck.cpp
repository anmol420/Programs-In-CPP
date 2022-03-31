//Duck Number Code In C++

#include <iostream>

using namespace std;

int main() {
    int num;
    cout<<"Enter A Number To Be Checked"<<endl;
    cin>>num;
    int c=0;
    while (num!=0) {
        int d = num%10;
        if (d==0) {
            c++;
        }
        num/=10;
    }
    if (c>0) {
        cout<<"A Duck Number"<<endl;
    } else {
        cout<<"Not A Duck Number"<<endl;
    }
    return 0;
}