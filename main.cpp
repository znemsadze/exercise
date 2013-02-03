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

bool polmem[4001][4001];
bool polind[4001][4001];
char str[4001];
struct Pol{
    int id;
    int start;
    int end;
    int parent;
}pol;

bool polrec(int start,int l){
    if(polind[start][l])return polmem[start][l];
    if(l<1)return true;
    bool cur;
    if(str[start]==str[start+l-1]){cur= polrec(start+1,l-2);}
    else{ cur=false;}
    polind[start][l]=true;
    polmem[start][l]=cur;
    return cur;
  }



int BinaryLex(){
    string s;
    cin>>str;s=str;
    queue<Pol> myqueue;
    
    vector<string> res(0);vector<Pol> pols(0);
    int n=s.length();int i=0;int ind;int pind=0;
    Pol pol,pol1;
    
    for(int j=0;j<n;j++){
    pol.id=pind;pind++;
    pol.start=0;
    pol.parent=0;
      if(polrec(0,j)){pol.end=j;pols.push_back(pol); myqueue.push(pol);
        if(j==n-1){cout<<1<<"\n"<<s;return 0;}
       }
    }
    while( myqueue.size()>0){
       pol1= myqueue.front();myqueue.pop();
         
        for(int j=pol1.end+1;j<n-pol1.end-1;j++){
            if(polrec(pol1.end+1,j)){
                  pol.id=pind;pind++; pol.parent=pol1.id;
                  pol.start=pol1.end+1;
                  pol.end=pol1.end+1+j;
                  pols.push_back(pol);myqueue.push(pol);
                  if( pol.end==n-1){
                      res.push_back(s.substr(pol.start,pol.end-pol.start+1));
                      
                      while(pol1.parent>0){
                          pol=pols[pol.parent];
                          res.push_back(s.substr(pol.start,pol.end-pol.start+1));
                          
                      }
                            cout<<res.size()<<endl;
                            for(int i=0;i<res.size()-1;i++){
                                cout<<res[i]<<" ";
                            }
                      return 0;
                  }
                  
                  
                  
             }
            
        }
         
    }
 
     
     
    
     
}
 
int main() {
    int k=BinaryLex();
   return 0;
}






