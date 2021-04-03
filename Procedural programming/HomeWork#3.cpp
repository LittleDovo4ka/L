//
//  main.cpp
//  HomeWork#3
//
//  Created by LittleDevo4ka on 27.09.2020.
//  Copyright © 2020 LittleDevo4ka. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <math.h>
#include <fstream>
#include <ctype.h>
using namespace std;
int Taskn, i;
float s1, p1, n1, m1, x1, r1;
float s2, m2, n2, p2;
ofstream F3;
ifstream F4;
char ch3, b;
string str[10];
char ch4;
float m;
char ch5;
float N1 = 'a';
float N2 = 'z';
float digit;
bool dt;
int main(int argc, const char * argv[]) {
    cout<<"Enter the task number: ";
    cin>>Taskn;
    if(Taskn == 1){                                        //Task 1
        cout<<"Enter s: ";
        cin>>s1;
        cout<<"Enter p: ";
        cin>>p1;
        cout<<"Enter n: ";
        cin>>n1;
        r1 = p1/100;
        x1 = pow((1+r1), r1);
        if(x1 == 1) {
            cout<<"Error: division by zero";
            return 0;
        }
        m1 = (s1*r1*x1)/(12*(x1-1));
        cout<<"Answer: "<<m1<<"\n";
        return 0;
    }
    if(Taskn == 2) {                                        //Task 2
        cout<<"Enter s: ";
        cin>>s1;
        if(s1<0) {
            cout<<"Error: s cannot be negative\n";
            return 0;
        }
        cout<<"Enter n: ";
        cin>>n1;
        if(n1<0){
            cout<<"Error: n cannot be negative\n";
            return 0;
        }
        cout<<"Enter m: ";
        cin>>m1;
        if(m1<0) {
            cout<<"Error: m cannot be negative\n";
            return 0;
        }
        i = 0;
        p1 = 0.01;
        while ((s1 * (p1/100) * pow(1 + (p1/100), n1)) / (12 * (pow(1 + (p1/100), n1) - 1))<m1) {
            i = i + 1;
            p1+=0.01;
            cout<<p1<<"\n";
        }
        cout<<p1<<"\n";
        cout<<"Number of iterations: "<<i<<"\n";
    }
    if(Taskn == 3) {                                        //Task 3
        string str;
        F3.open("/Users/devo4ka/Documents/XCode/HomeWork#3/HomeWork#3/9.txt");
        cout<<"Do you want to enter the string yourself?(y/n)\n";
        cin>>b;
        if(b == 'n'){
        if(!F3.is_open()){  //Проверяем открыт ли файл
            cout<<"Error: failed to open file"; //Если не открыт, то выводим ошибку
        } else {
            F3<<"Hello World:02.10.2020"; //Вводим в файл строку
        }
        }
        if(b == 'y'){
            cout<<"Ok, but in the end of the string you must put ';'\n";
            getline(cin, str, ';');
            if(!F3.is_open()) {
                cout<<"Error: failed to open file";
            } else {
                F3<<str;
            }
        }
        F3.close();
        F4.open("/Users/devo4ka/Documents/XCode/HomeWork#3/HomeWork#3/9.txt");
        if(!F4.is_open()){
            cout<<"Error: failed to open file\n";
        } else {
            cout<<"File open successfully\n";
            while(F4.get(ch3)) {
                cout<<ch3;
            }
            F4.close();
            cout<<"\n";
        }
        
    }
    if(Taskn == 4) {                                        //Task 4
        dt = false;
        float m1 = '0';
        int y = 0;
        F4.open("/Users/devo4ka/Documents/XCode/HomeWork#3/HomeWork#3/9.txt");
        if(!F4.is_open()){
            cout<<"Error: failed to open file\n";
        } else{
            cout<<"File open successfully\n";
            while(F4.get(ch4)){
                if(isdigit(ch4)){
                    if(dt) {
                        digit = digit * 10 + (ch4-m1);
                        //cout<<digit<<"\n";
                    }

                    if(!dt) {
                        digit = ch4-m1;
                        dt = true;
                    }                }
                if(!isdigit(ch4)) {
                    if(dt) {
                        cout<<digit<<"\n";
                        y += digit;
                        dt = false;
                    }
                }
            }
            F4.close();
        }
        if(dt) {
            cout<<digit<<"\n";
            y += digit;
        }
        cout<<y<<"\n";
    }
    if(Taskn == 52) {
        //char str[10];
        string str2;
        getline(cin, str2, ';');
        cout<<str2<<"\n";
        F3.open("/Users/devo4ka/Documents/XCode/HomeWork#3/HomeWork#3/9.txt", ios_base::app);
        if(!F3.is_open()) {
            cout<<"Error\n";
        } else{
            cout<<"Not Error\n";
            F3<<str2;
        }
        F3.close();
    }
    if(Taskn == 5) {                                        //Task 5
        char a[30];
        i=0;
        F4.open("/Users/devo4ka/Documents/XCode/HomeWork#3/HomeWork#3/10.txt");
        if(!F4.is_open()) {
            cout<<"Error: Failed to open file\n";
        } else{
            cout<<"File open successfully\n";
            while(F4.get(ch5)) {
                cout<<ch5;
                a[i] = ch5;
                i++;
            }
            
        }
        cout<<"\n";
        int left = 0;
        int right = 29;
        while (left<=right) {
            
            for(i = left; i < right; i++){
                if(a[i]>a[i+1]) {
                    swap(a[i], a[i+1]);
                    }
            }
            --right;
            for(i = right; i>left; --i){
                if(a[i-1]>a[i]){
                    swap(a[i-1], a[i]);
                    }
            }
            left++;
            
        }
        for(i=0;i<30;i++) {
                if (a[i]>=N1) {
                    if (a[i]<=N2) {
                        cout<<a[i];
                    }
                }
        }
        cout<<"\n";
        F4.close();
    }
}

