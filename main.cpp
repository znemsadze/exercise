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
using namespace std;

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




int barneyStenson(){
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
 
int main() {
    int k=barneyStenson();
   return 0;
}






