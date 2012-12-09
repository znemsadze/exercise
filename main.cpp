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
#include <algorithm>
//#include "eolimp/Solved.h"
//#include "eolimp/eolimp1.h"
using namespace std;

/*
 * 
 */
int spiderAndFly(){

    int a,b,c,x1,y1,x2,y2,z2;
     ifstream inf("input.txt");
    // ofstream outf("output.txt");
     FILE *outf = fopen("output.txt", "w");
//    outf.precision(2);
//    outf.setf(ios::fixed, ios::floatfield);
    inf>>a>>b>>c>>x1>>y1>>x2>>y2>>z2;
    int gg;
    if(z2>0) {
    if(x2==0){
           gg=x1;
    }else if(x2==a){
        gg=a-x1;
    }else if(y2==0){
        gg=y1;
    }else if(gg==b)
    {  gg=b-y1;}
        

      
//    outf<<sqrt(gg*gg+pow(gg/z2*abs(y2-y1),2))+
//                        sqrt(pow(z2,2)+pow(z2/gg*abs(y2-y1),2))<<"\n";
    fprintf(outf,"%.2f",sqrt(gg*gg+pow(gg/z2*abs(y2-y1),2))+
                        sqrt(pow(z2,2)+pow(z2/gg*abs(y2-y1),2)));
     
    }else{
//     outf<<sqrt(pow(abs(x1-x2),2)+pow(abs(y1-y2),2))<<"\n";
      fprintf(outf,"%.2f",sqrt(pow(abs(x1-x2),2)+pow(abs(y1-y2),2)));
    }
 fclose(outf);   
}





int main(int argc, char** argv) {
    
    int k=spiderAndFly();
 
   return 0;
}

