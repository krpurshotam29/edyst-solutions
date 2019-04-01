#include <stdio.h>
#include <math.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    long long int n;
	    scanf("%lld",&n);
	    char c;
	    long long int p[10][5]={0};
	    long long int i=0,count=0,x=n;
	    getchar();
	    while(n--){
	        while((c=getchar())!='\n'){
	            if(c==97)
	                p[i][0]++;
	            else if(c==101)
	                p[i][1]++;
	            else if(c==105)
	                p[i][2]++;
	            else if(c==111)
	                p[i][3]++;
	            else if(c==117)
	                p[i][4]++;
	        }
	        i++;
	    }
	    for(long int a=0;a<x-1;a++){
	        for(long int b=a+1;b<x;b++){
	            if((p[a][0]+p[b][0]>0) && (p[a][1]+p[b][1]>0) && (p[a][2]+p[b][2]>0) && (p[a][3]+p[b][3]>0) && (p[a][4]+p[b][4]>0)){
	                count++;
	            }
	        }
	    }
	    printf("%lld\n",count);
	}
	return 0;
}
