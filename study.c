#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%2==0){
    	printf("礎熱+");
	}
	else{
		printf("�汝�+");
	}
	if(b%2==0){
    	printf("礎熱=");
	}
	else{
		printf("�汝�=");
	}
	if(a%2==0 && b%2==0){
		printf("礎熱");
	}
	else if(a%2==1 && b%2==1){
		printf("礎熱");
	}
	else if(a%2==0 && b%2==1){
		printf("�汝�");
	}
	else if(a%2==1 && b%2==0){
		printf("�汝�");
	}
    return 0;
}

