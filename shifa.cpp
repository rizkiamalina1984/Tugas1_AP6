#include <iostream>

using namespace std;

int main(){
     int MD, M, D;

     system("cls");
     cout<<"Input Nilai M = "; cin>>M;
     cout<<"Input Nilai D = "; cin>>D;

     MD = M & D;

     cout<<"\nHasil dari "<<M<<" & "<<D<<" = "<<MD<<endl;

}