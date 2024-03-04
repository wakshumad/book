#include<iostream>
using namespace std;
int main(){
float num[10],s;
cout<<"inter element of yr arrey\n";
for(int i=0;i<=5;i++)
    cin>>num[i];
for(int i=5;i>=0;i--)
    cout<<num[i]<<' '<<endl;
cout<<"inter the number u want to search\n";
cin>>s;
for(int i=0;i<=10;i++)
    if(s==num[i])
    cout<<"the number you serch is here "<<num[i];
    else
     cout<<"im sorry there is no such number";

return 0;
}
