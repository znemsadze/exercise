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


int matchModel(){

    long long k;
    cin>>k;
    
    cout<<k*12-(k-1)*4<<"\n";

}


int vauchers(){
    ifstream inf("input.txt");
   ofstream outf("output.txt");
    int m[15][2];
    int d[2];int n;
    inf>>n;int a;int b;
    for(int i=0;i<n;i++){
 
       inf>>m[i][0];inf>>m[i][1];
      
    }
    
    
   
    
    for (int i=0;i<n;i++){
        
        for(int j=i+1;j<n-1;j++){
            if((m[i][1]*m[i][0])<(m[j][1]*m[j][0])){
                
                d[0]=m[i][0];d[1]=m[i][1];
                m[i][1]=m[j][1];m[i][0]=m[j][0];
                m[j][0]=d[0];m[j][1]=d[1];
                
            }
            else if((m[i][1]*m[i][0])==(m[j][1]*m[j][0])){
                
               if(m[i][1]<(m[j][1])){
                d[0]=m[i][0];d[1]=m[i][1];
                m[i][1]=m[j][1];m[i][0]=m[j][0];
                m[j][0]=d[0];m[j][1]=d[1];
                }
            }
                 
        }
    }

     int k=0; int k1=0;int s=0;
    while(k<n)
    {
         
        if(m[k][0]>k1){s=s+m[k][1]*(m[k][0]-k1);  k1++;}
        
        k++;
    }
    outf<<s<<"\n";
    
    
}

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
