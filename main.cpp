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
#include <stack>


using namespace std;

struct Dirt {
    int x;
    int y;
    int side;
    int rang;
} dirt;

struct Square {
    int value;
    int color;int rang; 
};


Square a[502][502];

int dirtmethod() {
    freopen("input.txt", "rt", stdin);
    int n, m, x1, y1, x2, y2;
    int x;
    string s;

    cin >> n>>m;
    cin >> x1>>y1;
    cin >> x2>>y2;


    for (int i = 0; i < n; i++) {
        cin>>s;
        for (int j = 0; j < m; j++) {
            a[i + 1][j + 1].value = s[j] - 48;
            a[i][j].color = 0;a[i][j].rang=-1;
        }

    }
    for (int i = 0; i <= n + 1; i++) {
        a[i][0].value = 0;
        a[m + 1][0].value = 0;
    }
    for (int i = 0; i <= m + 1; i++) {
        a[0][i].value = 0;
        a[n + 1][0].value = 0;
    }


    queue<Dirt> left;
    queue<Dirt> right;


    dirt.x = x1;
    dirt.y = y1;
    dirt.side = a[x1][y1].value;
    dirt.rang = 0;

    if (dirt.side == 1) {
        left.push(dirt);
    } else {
        right.push(dirt);
    }
    Dirt front = dirt;

    int mov = 0, minrang;

    while (!left.empty() || !right.empty()) {
      
        if (front.side == 1) {
             
            while (!left.empty()) {
                  front=left.front();
                if (a[front.x - 1][front.y - 1].value > 0 && a[front.x - 1][front.y - 1].color == 0) {

                    dirt.x = front.x - 1;
                    dirt.y = front.y - 1;
                    dirt.side = a[front.x - 1][front.y - 1].value;
                    dirt.rang = front.rang + 1;
                    if (dirt.side == 1) {
                        left.push(dirt);
                    } else {
                        right.push(dirt);
                    }
                }
                if (a[front.x][front.y - 1].value > 0 && a[front.x][front.y - 1].color == 0) {

                    dirt.x = front.x;
                    dirt.y = front.y - 1;
                    dirt.side = a[front.x][front.y - 1].value;
                    dirt.rang = front.rang + 1;
                    if (dirt.side == 1) {
                        left.push(dirt);
                    } else {
                        right.push(dirt);
                    }
                }
                if (a[front.x - 1][front.y].value > 0 && a[front.x - 1][front.y].color == 0) {

                    dirt.x = front.x - 1;
                    dirt.y = front.y;
                    dirt.side = a[front.x - 1][front.y].value;
                    dirt.rang = front.rang + 1;
                    if (dirt.side == 1) {
                        left.push(dirt);
                    } else {
                        right.push(dirt);
                    }
                }

                if (a[front.x + 1][front.y + 1].value > 0 && a[front.x + 1][front.y + 1].color == 0) {

                    dirt.x = front.x + 1;
                    dirt.y = front.y + 1;
                    dirt.side = a[front.x + 1][front.y + 1].value;
                    dirt.rang = front.rang + 1;
                    if (dirt.side == 1) {
                        left.push(dirt);
                    } else {
                        right.push(dirt);
                    }
                }
                if (a[front.x][front.y + 1].value > 0 && a[front.x][front.y + 1].color == 0) {

                    dirt.x = front.x;
                    dirt.y = front.y + 1;
                    dirt.side = a[front.x][front.y + 1].value;
                    dirt.rang = front.rang + 1;
                    if (dirt.side == 1) {
                        left.push(dirt);
                    } else {
                        right.push(dirt);
                    }
                }
                if (a[front.x + 1][front.y].value > 0 && a[front.x + 1][front.y].color == 0) {
                    dirt.x = front.x + 1;
                    dirt.y = front.y;
                    dirt.side = a[front.x + 1][front.y].value;
                    dirt.rang = front.rang + 1;

                    if (dirt.side == 1) {
                        left.push(dirt);
                    } else {
                        right.push(dirt);
                    }
                }
                if (a[front.x - 1][front.y + 1].value > 0 && a[front.x - 1][front.y + 1].color == 0) {

                    dirt.x = front.x - 1;
                    dirt.y = front.y + 1;
                    dirt.side = a[front.x - 1][front.y + 1].value;
                    dirt.rang = front.rang + 1;
                    if (dirt.side == 1) {
                        left.push(dirt);
                    } else {
                        right.push(dirt);
                    }
                }
                if (a[front.x + 1][front.y - 1].value > 0 && a[front.x + 1][front.y - 1].color == 0) {

                    dirt.x = front.x + 1;
                    dirt.y = front.y - 1;
                    dirt.side = a[front.x + 1][front.y - 1].value;
                    dirt.rang = front.rang + 1;
                    if (dirt.side == 1) {
                        left.push(dirt);
                    } else {
                        right.push(dirt);
                    }
                }

                left.pop();
                a[front.x][front.y].color = 1;
 
                if((a[front.x][front.y].rang == -1)||(a[front.x][front.y].rang>front.rang)){
                a[front.x][front.y].rang=front.rang;
                }
            }
  
             
           if (right.empty()) {
               front.side=0;
                } else {
                        front = right.front();
                }
                 
            if(a[x2][y2].color==1){
                cout<<a[x2][y2].rang+1<<" "<<mov;
                return 0;
            }else{
                                cout<<a[x2][y2].rang+1<<" "<<mov;
                return 0;
            }
                
            mov++;
        }



        if (front.side = 2) {
            
            while (!right.empty()) {
                front=right.front();
                if (a[front.x - 1][front.y - 1].value > 0 && a[front.x - 1][front.y - 1].color == 0) {

                    dirt.x = front.x - 1;
                    dirt.y = front.y - 1;
                    dirt.side = a[front.x - 1][front.y - 1].value;
                    dirt.rang = front.rang + 1;
                    if (dirt.side == 1) {
                        left.push(dirt);
                    } else {
                        right.push(dirt);
                    }
                }
                if (a[front.x][front.y - 1].value > 0 && a[front.x][front.y - 1].color == 0) {

                    dirt.x = front.x;
                    dirt.y = front.y - 1;
                    dirt.side = a[front.x][front.y - 1].value;
                    dirt.rang = front.rang + 1;
                    if (dirt.side == 1) {
                        left.push(dirt);
                    } else {
                        right.push(dirt);
                    }
                }
                if (a[front.x - 1][front.y].value > 0 && a[front.x - 1][front.y].color == 0) {

                    dirt.x = front.x - 1;
                    dirt.y = front.y;
                    dirt.side = a[front.x - 1][front.y].value;
                    dirt.rang = front.rang + 1;
                    if (dirt.side == 1) {
                        left.push(dirt);
                    } else {
                        right.push(dirt);
                    }
                }

                if (a[front.x + 1][front.y + 1].value > 0 && a[front.x + 1][front.y + 1].color == 0) {

                    dirt.x = front.x + 1;
                    dirt.y = front.y + 1;
                    dirt.side = a[front.x + 1][front.y + 1].value;
                    dirt.rang = front.rang + 1;
                    if (dirt.side == 1) {
                        left.push(dirt);
                    } else {
                        right.push(dirt);
                    }
                }
                if (a[front.x][front.y + 1].value > 0 && a[front.x][front.y + 1].color == 0) {

                    dirt.x = front.x;
                    dirt.y = front.y + 1;
                    dirt.side = a[front.x][front.y + 1].value;
                    dirt.rang = front.rang + 1;
                    if (dirt.side == 1) {
                        left.push(dirt);
                    } else {
                        right.push(dirt);
                    }
                }
                if (a[front.x + 1][front.y].value > 0 && a[front.x + 1][front.y].color == 0) {
                    dirt.x = front.x + 1;
                    dirt.y = front.y;
                    dirt.side = a[front.x + 1][front.y].value;
                    dirt.rang = front.rang + 1;

                    if (dirt.side == 1) {
                        left.push(dirt);
                    } else {
                        right.push(dirt);
                    }
                }
                if (a[front.x - 1][front.y + 1].value > 0 && a[front.x - 1][front.y + 1].color == 0) {

                    dirt.x = front.x - 1;
                    dirt.y = front.y + 1;
                    dirt.side = a[front.x - 1][front.y + 1].value;
                    dirt.rang = front.rang + 1;
                    if (dirt.side == 1) {
                        left.push(dirt);
                    } else {
                        right.push(dirt);
                    }
                }
                if (a[front.x + 1][front.y - 1].value > 0 && a[front.x + 1][front.y - 1].color == 0) {

                    dirt.x = front.x + 1;
                    dirt.y = front.y - 1;
                    dirt.side = a[front.x + 1][front.y - 1].value;
                    dirt.rang = front.rang + 1;
                    if (dirt.side == 1) {
                        left.push(dirt);
                    } else {
                        right.push(dirt);
                    }
                }

                right.pop();
                a[front.x][front.y].color = 1;
                if((a[front.x][front.y].rang == -1)||(a[front.x][front.y].rang>front.rang)){
                a[front.x][front.y].rang=front.rang;
                }

            }
 
             if (!left.empty()) {

                    front = left.front();

                }
            if(a[x2][y2].color==1){
                cout<<a[x2][y2].rang+1<<" "<<mov;
                return 0;
                
            }else{
                cout<<"0 0";
                return 0;
            }
            mov++;
        }

    }

    return 0;
}

int main() {
    dirtmethod();
} 