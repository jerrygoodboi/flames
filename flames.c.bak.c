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
     // printf(" %d %d \n",i,j);
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
//printf("%d \n",ar[i]);
++i;
}
switch((fn+sn)-(i*2)){
	case 1: 
		printf("Sister ");
		break;
	case 2:
	case 4:
	case 7: 
	case 9: 
		printf("Enenmy ");
		break;
	case 3:
  	case 5:

  	case 14: 
                printf("Friend ");
		break;
	case 10:
		printf("love <3");
		break;
	case 6:
	
	case 11:
	case 15:
		printf("Marriage ");
 		break;
	case 8:
	case 12:
	case 13:
		printf("Affection ");
		break;
	default:
		printf("GO find yourself ");
}
printf("\n");
}
