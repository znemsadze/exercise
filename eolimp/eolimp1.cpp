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