#include <iostream>
using namespace std;
int main(){

int n;
cout<<"enter the row :";
cin>>n;

int mid=n/2+1;        // this line is used to print star in middle.

for (int i=1;i<=n;i++){
    for (int j=1;j<=n;j++){
        if (i==mid || j==mid)
        cout<< "* ";
    
      else  cout<<"  ";
    } 

    cout<<endl;
}



}