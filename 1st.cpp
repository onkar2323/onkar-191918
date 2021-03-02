#include<iostream>
using namespace std; 
void read_matrix(int a[10][10],int x,int y) 
{ 
int i,j; 
 cout<<"Enter elements, starting row wise :- \n"; 
for(i=0;i<x;i++) 
 { 
for(j=0;j<y;j++) 
 { 
 cin>>a[i][j]; 
 } 
 } 
} 
void display_matrix(int a[10][10], int m, int n){ 
int i,j; 
for(i=0;i<m;i++) 
 { 
for(j=0;j<n;j++) 
 { 
 cout<<a[i][j]<<"\t"; 
 } 
 cout<<endl; 
 } 
} 
int main() 
{ 
int a[10][10],m,n; 
 cout<<"Enter the value of m and n : "; 
 cin>>m>>n; 
read_matrix(a,m,n); 
 cout<<endl; 
 cout<<"You have entered following matrix"<<endl; 
display_matrix(a,m,n); 
return 0;}
