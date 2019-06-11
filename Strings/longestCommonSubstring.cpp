#include <iostream>
using namespace std;


int longestCommonSubstring(char ch1[],char ch2[],int len1,int len2)
{
    if(len1==0 || len2==0)
    return 0;

    int mat[len1 + 1][len2 + 1]={};




    int maxlen=0;
    for(int i=0;i<len1;i++)
    {
        for(int j=0;j<len2;j++)
        {
            if(ch1[i]==ch2[j])
            {
                mat[i+1][j+1]=mat[i][j]+1;
                if(mat[i+1][j+1] > maxlen)
                maxlen=mat[i+1][j+1];
            }

        }
    }

    return maxlen;

}

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int len1,len2;
	    cin>>len1>>len2;
	    char ch1[200],ch2[200];
	    cin>>ch1;
	    cin>>ch2;
	    cout<<longestCommonSubstring(ch1,ch2,len1,len2)<<endl;
	}
	return 0;
}
