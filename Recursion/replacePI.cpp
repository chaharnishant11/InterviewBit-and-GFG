// Change in the given string itself. So no need to return or print anything
#include<string.h>
void replacePi(char input[]) {
	// Write your code here
    if(input[0]=='\0'){
        return ;
    }
    if(input[0]=='p' && input[1]=='i'){
        int len=strlen(input);
        for(int i=len;i>1;i--){
            input[i+2]=input[i];
        }
        input[len+2]='\0';
        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
        replacePi(input+2);
    }else
        replacePi(input+1);
}
