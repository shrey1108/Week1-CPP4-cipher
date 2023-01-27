// Recursion is a method in C++
#include<bits/stdc++.h>

using namespace std;

// int power(int base,int pow){

//   int num = 1;
//   for(int i = 0;i<pow;i++){
//     num*=base; //num = num*base;
//   }

//   return num;
// }

// void fun(int ar[][]){
//   return;
// }

int power(int base,int pow){

  if(pow == 0)return 1;

  int smlAns = power(base,pow-1);
  
  return smlAns*base;
}

int main(){
  int arr[5][4];
  //fun(arr);
  cout<<power(2,3);

  return 0;
}