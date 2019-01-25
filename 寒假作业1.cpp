#include<stdio.h>
int main()
{
	char c[10000];
	scanf("%s",c);
	int i,s[10]={0,0,0,0,0,0,0,0,0,0};
	for(i=0;c[i]!='\0';i++)
		switch (c[i]){
			case '0':s[0]++;break;
			case '1':s[1]++;break;
			case '2':s[2]++;break;
			case '3':s[3]++;break;
			case '4':s[4]++;break;
			case '5':s[5]++;break;
			case '6':s[6]++;break;
			case '7':s[7]++;break;
			case '8':s[8]++;break;
			case '9':s[9]++;break;
		}
	int max=0,smax=0;
	while(s[0]||s[1]||s[2]||s[3]||s[4]||s[5]||s[6]||s[7]||s[8]||s[9]){
		for(i=9;i>=0;i--){
			if(s[i]>max){
				max=s[i];
				smax=i;
			}
		}
		for(i=0;i<max;i++){
			printf("%d",smax); 
		}
		s[smax]=0;
		smax=0;
		max=0;
	}
	return 0;
 } 
