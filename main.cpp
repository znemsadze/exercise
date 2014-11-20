/* 
 * File:   main.cpp
 * Author: zviad
 *
 * Created on December 5, 2012, 12:08 AM
 */

#include <cstdlib>
#include <math.h>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;

 
long long R[1000][100];
bool ind[100][1000];
long m[1000];

long long rcalc(long long i,long long j){
    if(ind[i][i]){
    return R[i][j];
    }
    R[i][j]=rcalc(i-1,j-1)+m[i];
 
        
        
     
     
    
    
    
}


int  profit(){
//freopen("input.txt", "rt", stdin);
  // freopen("output.txt", "wt", stdout);
  int n;
  cin>>n;
  cout<<n;
  for(int i=0;i<n;i++){
      
      cout<<"dfsfdsf\n";
  
  
  }
  
    
}



int main() {    
  
    int k=profit();
   return 0;
}

int warmingUp(){
 freopen("input.txt", "rt", stdin);
  // freopen("output.txt", "wt", stdout);
   int n;
   long x,y,z;
   long res;long tmp;long tmp1;
   
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>x>>y>>z;
       tmp=x/y;res=tmp;
       while(tmp){
           tmp1=tmp/z;
           res+=tmp1;
           tmp=(tmp1==0)? 0:(tmp- tmp1*z)+tmp1 ;
 
       }
       cout<<res<<'\n';
   }
}



int squareCountry(){
    long long k;
    cin>>k;
     
    vector<long long> x(0);
    for(int i=0;i<=sqrt(k);i++){
        x.push_back(i*i);
    }

}




