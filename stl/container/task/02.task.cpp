#include <list>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    list<int> m1 = {};
    list<int> m2 = {};
   int m;
   int n;
   int x =0;
   cout<< "enter the value of m";
   cin >> m;
   cout<< "enter the value of n";
   cin >> n;
   for(int i=0; i<m; i++){
    cout<< "Enter the value : ";
    cin >> x;
    m1.push_back(x);
   }

    for(int i=0; i<n; i++){
    cout<< "Enter the value : ";
    cin >> x;
    m2.push_back(x);
   }
    

   for(int value1 : m2){
    m1.push_back(value1);
   }
  
   m1.sort();
   for(int value : m1){
    cout<< value<< endl;
   }

    return 0;
}