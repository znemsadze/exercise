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
#include <vector>
#include <algorithm>
using namespace std;
eolimp1::eolimp1() {
}

eolimp1::eolimp1(const eolimp1& orig) {
}

eolimp1::~eolimp1() {
}
//int spiderflyst(){
// int a,b,c,x1,y1,x2,y2,z2;
//     ifstream inf("input.txt");
//     ofstream outf("output.txt");
////     FILE *outf = fopen("output.txt", "w");
//    outf.precision(2);
//    outf.setf(ios::fixed, ios::floatfield);
//    inf>>a>>b>>c>>x1>>y1>>x2>>y2>>z2;
//    float sb=sqrt(1.0*pow(abs(x1-x2),2)+pow(abs(y1-y2),2));
//    outf<<sqrt(pow(sb,2)+pow(z2,2))<<"\n";
//}
//



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
int eolimp1::coription(){
    ifstream inf("input.txt");
    ofstream outf("output.txt");
    int n;float p; vector<long double> g;long double min1;long double min2; int ind1;
    int ind2; float a; 
    inf>>n;inf>>p;
   for (int i=0;i<n;i++){
       inf>>a;g.push_back(a);
   }
 
    
    //g.erase(g.begin()+3);
    //sort(g.begin(),g.end());
    
    while (g.size()>1){
        min1=g.at(0);ind1=0;
        for(int i=0;i<g.size();i++){
            if(g.at(i)<min1){min1=g.at(i);ind1=i;};
            }
        if(ind1!=0){min2=g.at(0); ind2=0;}else{min2=g.at(1);ind2=1;}
          
        for(int i=0;i<g.size();i++){
            if((g.at(i)<min2)&&(i!=ind1)){min2=g.at(i);ind2=i;};
            }
       g.at(ind1)=g.at(ind1) +g.at(ind2)-(g.at(ind1)+g.at(ind2))*p/100  ;
        
       g.erase(g.begin()+ind2);
    }
    
    outf.precision(2);
    outf.setf(ios::fixed, ios::floatfield);
      outf<<g.at(0)<<"\n";
         
 }


int eolimp1::spiderFly(){
    int a,b,c,x1,y1,x2,y2,z2;
     ifstream inf("input.txt");
     ofstream outf("output.txt");
//     FILE *outf = fopen("output.txt", "w");
    outf.precision(2);
    outf.setf(ios::fixed, ios::floatfield);
    inf>>a>>b>>c>>x1>>y1>>x2>>y2>>z2;
    float gg;
    if(z2>0) {
    if(x2==0){
           gg=x1;
              outf<<sqrt(gg*gg+pow(gg/z2*abs(y2-y1),2))+
                        sqrt(pow(z2,2)+pow(z2/gg*abs(y2-y1),2))<<"\n";

    }else if(x2==a){
        gg=a-x1;
                      outf<<sqrt(gg*gg+pow(gg/z2*abs(y2-y1),2))+
                        sqrt(pow(z2,2)+pow(z2/gg*abs(y2-y1),2))<<"\n";

    }else if(y2==0){
        gg=y1;
                      outf<<sqrt(gg*gg+pow(gg/z2*abs(x2-x1),2))+
                        sqrt(pow(z2,2)+pow(z2/gg*abs(x2-x1),2))<<"\n";

    }else if(y2==b)
    {  gg=b-y1;
                  outf<<sqrt(gg*gg+pow(gg/z2*abs(x2-x1),2))+
                        sqrt(pow(z2,2)+pow(z2/gg*abs(x2-x1),2))<<"\n";

    }
        

      
 //    fprintf(outf,"%.2f",sqrt(gg*gg+pow(gg/z2*abs(y2-y1),2))+
//                        sqrt(pow(z2,2)+pow(z2/gg*abs(y2-y1),2)));
//     
    }else{
     outf<<sqrt(1.0*pow(abs(x1-x2),2)+pow(abs(y1-y2),2))<<"\n";
//      fprintf(outf,"%.2f",sqrt(pow(abs(x1-x2),2)+pow(abs(y1-y2),2)));
    }
/// fclose(outf);   


}

int eolimp1::coriptionSort(){
    ifstream inf("input.txt");
    ofstream outf("output.txt");
    int n;float p; vector<long double> g; float a; 
    inf>>n;inf>>p;
   for (int i=0;i<n;i++){
       inf>>a;g.push_back(a);
   }

    sort(g.begin(),g.end());
    int k=0;
    while (g.size()>1){
        if(k<g.size()-1){
       if(g.at(k)<g.at(k+1)){ 
       k=0;
       g.at(k)=g.at(k) +g.at(k+1)-(g.at(k)+g.at(k+1))*p/100  ;
       g.erase(g.begin()+k+1);
      
       }else{   k++;
                if(k<g.size()-1){
                g.at(k)=g.at(k) +g.at(k+1)-(g.at(k)+g.at(k+1))*p/100  ;
                g.erase(g.begin()+k+1);
                }
                else{g.at(0)=g.at(0)+g.at(k)-(g.at(0)+g.at(k))*p/100;
                     g.erase(g.begin()+k);k=0;
                }
             }
     } else{g.at(0)=g.at(0)+g.at(k)-(g.at(0)+g.at(k))*p/100;
             g.erase(g.begin()+k);k=0;}
    }
    outf.precision(2);
    outf.setf(ios::fixed, ios::floatfield);
      outf<<g.at(0)<<"\n";
         
 }