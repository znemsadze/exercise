/* 
 * File:   main.cpp
 * Author: zcviad
 *
 * Created on December 5, 2012, 12:08 AM
 */

#include <cstdlib>
#include <math.h>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include "eolimp/eolimp1.h"
using namespace std;

/*
 * 
 */


 



int coription(){
    ifstream inf("input.txt");
    ofstream outf("output.txt");
    long long n;int p; int g[100000];int min1;int min2;long long ind1;
    long long ind2;int d;
    cin>>n;
   for (long long i=1;i<n;i++){
       cin>>g[i];
   }
   long long k=0;
   while(k<n){
      
     for(long long i=1;i<n-1;i++){
         for(long long j=i+1;j<n;j++)
            if (g[i]>g[j]){
                d=g[i];g[j]=g[i];g[i]=d;
            }

     }
   }
   
   
   
}

int main(int argc, char** argv) {
    
    eolimp1 e;
    int k=e.twofactory();
   
    return 0;
}
