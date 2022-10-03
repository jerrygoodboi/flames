#include <stdio.h>
#include <string.h>
int ar[]={69,69,69,69,69,69,69,69,69,69,69,69,69,69,69,69,69,69,69,69};
int checker(int a){
	int i;
for(i=0;i<(sizeof(ar)/4);i++){
if(a==ar[i]){
return 1;
}
else if(a!=ar[i]&&i==((sizeof(ar)/4)-1)){return 0;}
}
}
int main(){
	char firstname[10],secondname[10];
printf("Enter two names: ");
scanf("%s",&firstname);
printf("Enter the next name: ");
scanf("%s",&secondname);
int fn=strlen(firstname);
int sn=strlen(secondname);
#define fi firstname
#define si secondname
int i=0,j=0,k=0,ret=0;
while(fi[i]!='\0'){
      while(si[j]!='\0'){
      ret=checker(j);
      if(fi[i]==si[j]&&ret!=1){
      printf(" %d %d \n",i,j);
      ar[k]=j;
      ++k;
      ++i;
      }
      ++j;
      if(i<(fn-1)&&j==sn){
      j=0;
      ++i;}
      }
      ++i;
}
i=0;
while(ar[i]!=69){
printf("%d \n",ar[i]);
++i;
}
printf("No: %d ",(fn+sn)-(i*2));
}

