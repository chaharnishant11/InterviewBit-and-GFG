#include <iostream>
#include <string.h>

using namespace std;

bool isPermutation(char s1[], char s2[]) {
    if(strlen(s1)!=strlen(s2)){
        return false;
    }
    int a[26] = {0};
    int b[26] = {0};

    for(int i=0;i<strlen(s1);i++){
        a[s1[i]-'a']++;
        b[s2[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }

    return true;
}

int main() {
    char input1[1000], input2[1000];
    cin.getline(input1, 1000);
    cin.getline(input2, 1000);
    if(isPermutation(input1, input2) == 1) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}
