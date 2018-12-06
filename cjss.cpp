#include<stdio.h>
int main(){
int n,i,a,a0,k,j,sum,m,pro,sqr,a1,sum2,max;
int num[100],pri[999];
m = 0;
sum2 = 0;
max = 0;
for(a1=100;a1>=100&&a1<120;a1=a1+1){
a0 = a1;
a = a1;
i = 0,k = 0;
while(a0>0){
for(;a>=10;k=k+1){
a = a/10;}
num[i] = a;
printf("%d ",num[i]);
i = i+1;
for(;k>0;k=k-1){
a = 10*a;}
a0 = a0 -a;
if(a0*100<=a){
num[i] = 0;
printf("%d ",num[i]);
i = i+1;}
else{}
a = a0;}
j = i-1;
i = 0;
sum = 0;
while(i<=j){
sum = sum+num[i];
i = i+1;}
pro = 1;
for(i=0;i<=j;i=i+1){
pro = pro*num[i];}
sqr = 0;
for(i=0;i<=j;i=i+1){
sqr = sqr+num[i]*num[i];}
printf("%d %d %d\n",sum,pro,sqr);
i = 1;
n = 0;
while(i<=a0){if(a0%i==0){
n = n+1;}
else{}
i = i+1;}
if(n==2){a0 = 1;}
else{a0 = 0;}
i = 1;
n = 0;
while(i<=sum){if(sum%i==0){
n = n+1;}
else{}
i = i+1;}
if(n==2){sum = 1;}
else{sum = 0;}
i = 1;
n = 0;
while(i<=sqr){if(sqr%i==0){
n = n+1;}
else{}
i = i+1;}
if(n==2){sqr = 1;}
else{sqr = 0;}
i = 1;
n = 0;
while(i<=pro){if(pro%i==0){
n = n+1;}
else{}
i = i+1;}
if(n==2){pro = 1;}
else{pro = 0;}
if(sum==1&&pro==1&sqr==1&&a0==1){
pri[m] = a1;
sum2 = sum2+pri[m];
if(pri[m]>=max){
max = pri[m];}
else{}
m = m+1;
}
else{}}
printf("超级素数的个数为%d\n之和为%d\n最大为%d\n",m,sum2,max);
return 0;}
