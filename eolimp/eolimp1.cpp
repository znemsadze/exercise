/* 
 * File:   eolimp1.cpp
 * Author: zcviad
 * 
 * Created on December 8, 2012, 11:01 AM
 */

#include "eolimp1.h"
#include <iostream>
#include <fstream>
#include <stab.h>
#include <math.h>
using namespace std;
eolimp1::eolimp1() {
}

eolimp1::eolimp1(const eolimp1& orig) {
}

eolimp1::~eolimp1() {
}

int eolimp1::twofactory(){

    int k;
    cin>>k;int k1=0;
    long long b=0;   
            while(true){
                b++; k1=0;
        for(long long j=1;j<=sqrt(b);j++) {
            if(b%j==0){
                k1++;
             }
            if (k1>k)break;
        }  
              if(k1==k){
                    cout<<b<<"\n";break;
                }  
    
     }
    return 0;
     
}
 int eolimp1::digits(){

    long long k;
    cin>>k;
    int k1=1;
    for (int i=1;i<10;i++)
    {
        k=k/10;
        if(k>0)k1++;
        else
            break;
    }
    
    cout<<k1<<"\n";
    return 0;
}
 int eolimp1::vauchers(){
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
