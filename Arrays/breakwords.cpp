#include<string.h>
#include<iostream>

using namespace std;

void breakWords(char* s)
{
	int n = strlen(s);
    int i=0;
    int start=0;
    while(s[i]!='\0'){
        int c=1;
        while(s[i]!=' ' && s[i]!='\0'){
            c++;
            i++;
        }
        if(c%2!=0 && c>4){
            int j=start+c/2;
            int end = strlen(s);
           // cout << c << " " << j << " " << end << " " << start << endl;
            while(end>=j){
                s[end]=s[end-1];
                end--;
            }
            s[j]=' ';
        }
        i++;
        start=i;
    }
}
int main()
{
	char str[100000];
	cin.getline(str,100000);
	breakWords(str);
	cout<<str;
}
