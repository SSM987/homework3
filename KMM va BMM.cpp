#include <iostream>
using namespace std;
int bmm(int n1,int n2,int a){
while(n1!=0){
        a=n1;
        n1=n2%n1;
        n2=a;
}
return a;
}

int kmm(int n1, int n2, int a){
    return (n1*n2)/bmm(n1,n2,a);
}
int main(){
    int n1,n2,a;
    cout<<"Please enter 2 number:";
    cin>>n1>>n2;
    int b= kmm(n1,n2,a);
    int c= bmm(n1,n2,a);
    cout<<"KMM is:"<<b<<endl;
    cout<<"Bmm is:"<<c<<endl;
    return 0;
}
