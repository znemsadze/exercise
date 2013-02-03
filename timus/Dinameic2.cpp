/* 
 * File:   Dinameic2.cpp
 * Author: zviad
 * 
 * Created on February 3, 2013, 12:37 PM
 */

#include "Dinameic2.h"

Dinameic2::Dinameic2() {
}

Dinameic2::Dinameic2(const Dinameic2& orig) {
}

Dinameic2::~Dinameic2() {
}
//--staicases--------------------------

long long stmem[501][500];
bool stind[501][501];

long long  stairrec(int h,int n){
    if(stind[h][n]==true){return stmem[h][n];}
    if(h<2)return 0;
          if (n<=1){return 1;}
    long long cur=0;
    for(int i=2;i<h&&i<=n;i++)
         
        cur+=stairrec(i,n-i);
    stmem[h][n]=cur;
    stind[h][n]=true;
    return cur;
}
Dinameic2::staircases(){
    int n;
    cin>>n;
    long long cur=0;
    for(int i=2;i<n;i++){
        cur+=stairrec(i,n-i);
    }
    cout<<cur;
    return 0;
     
}
//----------------------------------------------
//--Binary Lexicographic-------------------
long long  blmem[45];
bool blind[45];


long long blrec(int find){
    
    if(blind[find])return blmem[find];
    else {
        blind[find]=true;blmem[find]=blmem[find-1]+blmem[find-2];
        return blmem[find];
     }
    
    
}

Dinameic2::binaryLexicographic(){
  long long k;
    int n;
    int res[45];
    cin>>n>>k;
     
    int ind=0;
    for(int i=0;i<=n;i++){
        res[i]=0;
    }
    
    blind[0]=true;blind[1]=true;blind[2]=true;
    
    blmem[0]=1;blmem[1]=2;blmem[2]=3;
    int m=n;ind=1;
    while(k!=0){
    
        ind=0;
    for(int i=0;i<=m;i++ ){
         if(k<=blrec(i)){ 
             if(i>1)  {
                k=k-blrec(i-1) ;   
                 res[i]=1;m=m-2;ind=1;break;}
             else{ if(i==1)k=k-1 ;else  k=0;
                   res[i]=1;ind=1;break;}
         }
          
    }
        if(ind==0){cout<<-1;return 0;} 
      
    }
 
    for(int i=0;i<n;i++){
        cout<<res[n-i];
    }
 
}
//--------------------------------------------------

