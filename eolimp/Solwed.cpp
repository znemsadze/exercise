/* 
 * File:   Solwed.cpp
 * Author: zcviad
 * 
 * Created on December 8, 2012, 6:50 PM
 */

#include "Solwed.h"
#include <iostream>
#include <fstream>
#include <stab.h>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;
Solwed::Solwed() {
}

Solwed::Solwed(const Solwed& orig) {
}

Solwed::~Solwed() {
}

int Solwed::matches(){
     ifstream inf("input.txt");
     ofstream outf("output.txt");
     long long n;long long result;
     long long ksq;
     inf>>n;
     ksq=sqrt(n);result=2*ksq*(ksq+1)+2*(n-ksq*ksq)+(n-ksq*ksq)/(ksq+1)+(n!=ksq*ksq);
     outf<<result<<"\n";
     
    
}