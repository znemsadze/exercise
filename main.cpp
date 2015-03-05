/* 
 * File:   main.cpp
 * Author: zviad
 *

 */

#include <cstdlib>
#include <math.h>
#include<stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;

int main() {

    freopen("input.txt", "rt", stdin);
    long long n, x, n1,cnt=0, n2,m;
    cin>>n;
    vector<long long> a(0);
    a.push_back(cnt);
    for (long long i = 0; i < n; i++) {
        cin>>x;cnt+=x;
        a.push_back(cnt);
    }
    cin>>m;
    
     a.push_back(a[n-1]); a.push_back(a[n-1]);
    for (long long i = 0; i < m; i++) {
        cin>>x;
        n1=n ;n2=n+2;
        while (abs(n2-n1)>1) {
            
            if(x<a[n1]){
                n2=n1;
                n1=n1/2;
                        
            }else if(x==a[n1]) {
                 
                break;
            }else{
                n1=n1+(n2-n1)/2;
            }
        }
        
        if(a[n1]<x){
            n1++;
        } 
        cout<<n1<<"\n";




    }


}