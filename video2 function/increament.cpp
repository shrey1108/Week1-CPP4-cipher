// Functions Continue in C++
#include<bits/stdc++.h>
using namespace std;

// pass by val.
// void increment(int a){
//   a++;
//   return ;
// }


// pass by ref.
void increment(int&a){
  
  a++;
  return ;
}
int main(){

  int i = 11;
  // cout<<i<<endl;


  increment(i);

  cout<<i<<endl;

  return 0;
}