//
//  main.cpp
//  Experement 1.2
//
//  Created by LittleDevo4ka on 06.09.2020.
//  Copyright © 2020 Крупнов Дорофей. All rights reserved.
//
//Homework 2
#include <iostream>
#include <unistd.h>
#include <math.h>
#include <cmath>
using namespace std;
int Taskn;
const double Pi = 3.141592653;
float R, r, h, l, S, V, b;
float x, a, w;
float x3, y3, b3, z3, o3;
int N;
float y4,x4,p;
int main(int argc, const char * argv[]) {
    cout<<"Enter the task number: ";
    cin>>Taskn;
    if(Taskn==1) {
    //Task 1
    cout<<"\nEnter R: ";
    cin>>R;
    if(R==0){
        cout<<"Error: lenght cannot be zero\n";
        return 0;
    } else if(R<0){
        cout<<"Error: lenght cannot be negative\n";
        return 0;
    }
    cout<<"Enter r: ";
        cin>>r;
    if(r==0){
        cout<<"Error: lenght cannot be zero\n";
        return 0;
    } else if(r<0){
        cout<<"Error: lenght cannot be negative\n";
        return 0;
    }
    cout<<"Enter h: ";
        cin>>h;
    if(h==0){
        cout<<"Error: lenght cannot be zero\n";
        return 0;
    } else if(h<0){
        cout<<"Error: lenght cannot be negative\n";
        return 0;
    }
        if(R == r) {
            cout<<"Error: This figure is not cone";
            return 0;
        }
        b = 1;
        b /= 3;
        V =  b * Pi * h * (R*R + R*r + r*r);
        cout<<"The volume is: "<<V<<"\n";
        l = ((R-r)/2) * ((R-r)/2) + (h*h);
        S = Pi * ((R*R) + (R + r) * l + r*r);
        cout<<"The square is: "<<S<<"\n";
    }
    if(Taskn == 2){
    //Task 2
        cout<<"\nEnter a: ";
        cin>>a;
        cout<<"Enter x: ";
        cin>>x;
        if(x == 0){
            cout<<"Error: x cannot be zerro";
            return 0;
        }
        if(abs(x)<1){
            w = a * log(abs(x));
        }
        if(abs(x)>=1) {
            if(a<x*x) {
                cout<<"Error: square root cannot be negative\n";
                return 0;
            }
            w = sqrt(a-(x*x));
        }
        cout<<"Answer: "<<w<<"\n";
    }
    if(Taskn == 3){
        cout<<"Enter b: ";
        cin>>b3;
        cout<<"Enter y: ";
        cin>>y3;
        cout<<"Enter x: ";
        cin>>x3;
        if(b3-x3<0) {
            cout<<"Error: square root cannot be negative\n";
            return 0;
        }
        o3 = sqrt(b3-x3);
        o3 = o3 * (b3-y3);
        if(o3<=0){
            cout<<"Error: sub-logarithmic expression must be > 0\n";
            return 0;
        }
        z3 = log(o3);
        cout<<"Answer: "<<z3<<"\n";
    }
    if(Taskn == 4) {
        cout<<"Enter N: ";
        cin>>N;
        cout<<"Answer: ";
        for (int i=0; i<9; i++) {
            cout<<N+i;
        }
        cout<<"\n";
    }
    if(Taskn == 5) {
        x4 = -4;
        for(float i=-4; i<=4; i=i+0.5) {
            y4 = (x4*x4 - 2*x4 + 2)/(x-1);
            cout<<"x = "<<x4<<"     y = "<<y4<<"\n";
            x4 = x4 + 0.5;
        }
    }
    return 0;
}
