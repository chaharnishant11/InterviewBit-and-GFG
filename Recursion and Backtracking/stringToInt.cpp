#include <string.h>
#include <math.h>
int stringToNumber(char input[]) {
    // Write your code here
    if(input[0]=='\0'){
        return 0;
    }
    int n=strlen(input);

    int ans = stringToNumber(input+1);
    ans=(input[0]-'0')*pow(10,n-1)+ans;
    return ans;
}
