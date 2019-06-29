#include<iostream>
#include<stack>
using namespace std;
string decode(string str)
{
    stack<int> numstack;
    stack<char> stringstack;
    string temp="",result="";
    int i=0,j=0,count=0;
    for(i=0;i<str.length();i++)
    {
        count = 0;
        if(str[i] >= '0' && str[i]<='9')
        {
            while(str[i] >= '0' && str[i]<='9')
            {
                count = count*10 +  str[i] - '0';
                i++;
            }
            i--;
            numstack.push(count);
        }
        else if(str[i] == ']')
        {
            temp = "";
            count=0;
            if(!numstack.empty())
            {
                count = numstack.top();
                numstack.pop();
            }
            while(!stringstack.empty() && stringstack.top()!='[' )
            {
                temp = stringstack.top() + temp;
                stringstack.pop();
            }
            if(!stringstack.empty() && stringstack.top()=='[')
                stringstack.pop();

            for(j=0;j<count;j++)
                result = result + temp;

            for(j=0;j<result.length();j++)
                stringstack.push(result[j]);


            result="";
        }
        else if(str[i]=='[')
        {

            if(str[i-1] >= '0' && str[i-1]<='9')
                stringstack.push(str[i]);
            else
            {
                stringstack.push(str[i]);
                numstack.push(1);
            }
        }
        else
             stringstack.push(str[i]);

    }
    while(!stringstack.empty())
    {
        result = stringstack.top() + result;
        stringstack.pop();
    }

    return result;
}
int main()
 {
	//code
    int t,N,*arr,i,j;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        cout<<decode(str)<<endl;
    }
	return 0;
}
