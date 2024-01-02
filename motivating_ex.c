#include <stdio.h>
#include <string.h>




char *copy(char *dest, const char* src){
	return strcpy(dest, src);
}

void auth(){
		char (*str_op)(char *, const char *) = copy;
		char data[100];
		fgets(data,sizeof(data),stdin);//SLIVER_SOURCE
		char sensitive_data[20];
		(*str_op)(sensitive_data, data); 
	    	char dest[50];
		memcpy(dest,sensitive_data,sizeof(sensitive_data));		
}

void main(){
	auth();
	
}
