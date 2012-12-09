/* 
 * File:   Solwed.cpp
 * Author: zcviad
 * 
 * Created on December 8, 2012, 6:50 PM
 */

#include "Solved.h"
#include <iostream>
#include <fstream>
#include <stab.h>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;
Solved::Solved() {
}

Solved::Solved(const Solved& orig) {
}

Solved::~Solved() {
}

int Solved::matches(){
     ifstream inf("input.txt");
     ofstream outf("output.txt");
     long long n;long long result;
     long long ksq;
     inf>>n;
     ksq=sqrt(n);result=2*ksq*(ksq+1)+2*(n-ksq*ksq)+(n-ksq*ksq)/(ksq+1)+(n!=ksq*ksq);
     outf<<result<<"\n";
     
    
}

int Solved::matchModel(){
      ifstream inf("input.txt");
      ofstream outf("output.txt");
   long double n;
   inf>>n;
   long long pw;long long kb;long long nk;
   
   long long sq;
   pw=(int)pow(n,1.0/3);
   kb=3*(pw+1)*pw*(pw+1);
   nk=n-pw*pw*pw;
   if(nk>pw*pw){
       kb=kb+2*pw*(pw+1)+(pw+1)*(pw+1);
       nk=nk-pw*pw;
       if(nk>pw*(pw+1)){
           kb=kb+pw*(pw+2)+(pw+1)*(pw+1)+(pw+1)*(pw+2);
           nk=nk-pw*(pw+1);
       }
           
   }
   if(nk>0){
    sq=sqrt(nk);
    kb=kb+2*sq*(sq+1)+(sq+1)*(sq+1);
    nk=nk-sq*sq;
    if(nk>0){
        kb=kb+2+nk*3+(nk/(sq+1))*2;
    }
    
   }
   
   outf<<kb<<"\n";
   
}