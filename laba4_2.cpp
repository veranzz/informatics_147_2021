#include<iostream>
using namespace std;
void Swap(float *a, float *b){
   
    float temp = *a;
    *a = *b;
    *b = temp; 

}
int main(){
    float a,b;
    cout<<"Enter a and b"<<endl;
    cin>>a;
    cin>>b;
    Swap(&a,&b);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;


    return 0;
}