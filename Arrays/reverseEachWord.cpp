#include<cstring>
#include<iostream>
using namespace std;
void reverseEachWord(char s1[]) {
    // Write your code here
    int i=0;
    int start=0;
    int end=-1;
    while(i<strlen(s1)){
        end=i-1;
        while(s1[i]!=' ' && i<strlen(s1)){
            end++;
            i++;
        }
        while(start<end){
            char temp = s1[start];
            s1[start]=s1[end];
            s1[end]=temp;
            end--;
            start++;
        }
        i++;
        start=i;
    }

}


int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseEachWord(input);
    cout << input << endl;
}
  
