#include<stdio.h>
int main(){
int n,i,a,a0,k,j;
int num[100];
scanf("%d",&n);
while(n>0){
scanf("%d",&a);
a0 = a;
i = 0,k = 0,j = 0;
while(a0>0){
for(;a>=10;k=k+1){
a = a/10;}
num[i] = a;
i = i+1;
for(;k>0;k=k-1){
a = 10*a;}
a0 = a0 -a;
j = j+1;
a = a0;}
i = 0;
while(i<j){
if(num[i]==num[j-i-1]){
i = i+1;}
else{break;}
}
if(i==j){
printf("yes\n");}
else{printf("no\n");}
n = n-1;}
return 0;}
