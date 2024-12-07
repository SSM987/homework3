#include <iostream>
using namespace std;

int maghlob(int number,int b=0){
    while(number!=0){
            int c=number%10;
            b=b*10+c;
            number/=10;
    }
            return b;
}
int main(){
    int number,b;
    cout<<"Please enter a number:";
    cin>>number;
    int x=maghlob(number,b);
    cout<<x<<endl;
    return 0;
}
