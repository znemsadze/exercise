/* 
 * File:   Dinamic.cpp
 * Author: zviad
 * 
 * Created on January 27, 2013, 4:56 PM
 */

#include "Dinamic.h"

Dinamic::Dinamic() {
}

Dinamic::Dinamic(const Dinamic& orig) {
}

Dinamic::~Dinamic() {
}
//1353. Milliard Vasya's Function
long long mem1[83][11];
bool ind1[83][11];

long long wf(int s,int n){
    long long res=0;
    if(ind1[s][n])return mem1[s][n];
    if(n==1){
        return (s<=9)?1:0;
    }
    if (s==0)return 1;
    for(int i=0;i<=9;i++){
        if(i<=s){
            res+=wf(s-i,n-1);
        }
    }
    ind1[s][n]=true;
    mem1[s][n]=res;
    return res;
}

Dinamic::vasyasFunction(){
 int s;
    cin>>s;
    long long res;
    res=0;
    
    for(int i=0;i<=9;i++){
        if(i<=s)
         res+=wf(s-i,8);
    }
    if(s==1){res++;}
    cout<<res;
    return 0;
}
//-----------------------------------

//flags
 long long mem[4][4][50];
bool ind[4][4][50];
long long rec(int c1,int c2,int n){ 
    if(n==1)return 1;
    if (ind[c1][c2][n]==true)return mem[c1][c2][n];
    if (c2==1){
        if(c1==2){
            ind[c1][c2][n]=true;
            mem[c1][c2][n]= rec(1,3,n-1);
            return mem[c1][c2][n];
        }
        else{
            ind[c1][c2][n]=true;
            mem[c1][c2][n]=  rec(1,2,n-1);
            
           return  mem[c1][c2][n];
        }
    }else if(c2==3)
    {       ind[c1][c2][n]=true;
            mem[c1][c2][n]= rec(3,2,n-1)+rec(3,1,n-1);
        return mem[c1][c2][n];
    }else{
        ind[c1][c2][n]=true;
        mem[c1][c2][n]= rec(2,3,n-1)+rec(2,1,n-1);
        return mem[c1][c2][n];
    }

}

int Dinamic::flags(){
    int n;
    cin>>n;
    if (n<=2) {cout<<2; return 0;}
    cout<< rec(2,1,n-2)+rec(3,1,n-2) +rec(2,3,n-2)+rec(3,2,n-2);
    return 0;

}
//-----------------

//based numbers



long long mem[11][20];
bool ind[11][20];
int kk;



 
long long knrec(int k,int n){
    if (n==1){
        return kk-1;
    }
    if(ind[k][n]==true)return mem[k][n];
    int st=0;long long res=0;
    if(k==0)st++;
    for(int i=st;i<kk;i++){
        res+=knrec(i,n-1);
    }
    mem[k][n]=res;
    ind[k][n]=true;
    return mem[k][n];
}

int Dinamic ::basedNumber() {
    int n;
    cin>>n>>kk;
    long long res=0;
    for(int i=0;i<kk;i++)
    {
        res+=knrec(i,n-1);
    }
    cout<<res;
    return 0;
}
//----------------------------------------------

//luckyticets------------------------------------
bool ind[100][10];
long long mem [100][10];

int somerec(int s,int n){
    
    if(ind[s][n])return mem[s][n];
    int sum=0;
    if(n==1){
        return (s<=9)?1:0;
    }
    
    for(int i=0;i<=9;i++){
        if(i<=s){
            sum+=somerec(s-i,n-1);
        }
    }
    ind[s][n]=true;
    mem[s][n]=sum;
    return sum;
    
    
}

int Dinamic::lukyTickets(){
        int n;long long res=0;
    cin>>n;
    int p=n/2;int t,ss;
    for(int i=0;i<p*10;i++){
        res+=(somerec(i,p)*somerec(i,p));
    }
    
    cout<<res;
    

}
//barney Stenson
struct Girl{
    int st;
    int nd;
};


bool indbs[21][101];
long long membs[21][101];

Girl girls[21]; 

long long bsrec(int m,int n){
    if(indbs[m][n])return membs[m][n];
    
    if(m==1){
        return ((n>=girls[0].st)&&(n<=girls[0].nd))?1:0;
    }
    long long res=0;
    for(int i=girls[m-1].st;i<=girls[m-1].nd;i++){
        if(i<=n){
        res+=bsrec(m-1,n-i);
        }
    }
    indbs[m][n]=true;
    membs[m][n]=res;
    return res;
    

}
int Dinamic::barneyStenson(){
    
    
       freopen("input.txt", "rt", stdin);
   freopen("output.txt", "wt", stdout);
    int n,m;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        cin>>girls[i].st>>girls[i].nd;
        
    }
    cout<<bsrec(m,n);
    
    
    return 0;
}
//---------------------------------

