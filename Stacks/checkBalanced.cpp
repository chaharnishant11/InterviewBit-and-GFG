#include<bits/stdc++.h>
using namespace std;
int check(char c[])
{
    stack<char>s;
    if(c[0]==')' || c[0]=='}' || c[0]==']'){
        return 0;
    }
    for(int i=0;c[i]!='\0';i++)
    {
        if(c[i]=='(' || c[i]=='{' || c[i]=='[')
            s.push(c[i]);
        if(c[i]==')' || c[i]=='}' || c[i]==']')
        {
            if(s.empty()==true)
                return 0;
        else if(c[i]==')' && s.top()=='(')
            s.pop();
        else if(c[i]=='}' && s.top()=='{')
            s.pop();
        else if(c[i]==']' && s.top()=='[')
            s.pop();
        else
            return 0;

    }

}
if(s.empty()==true){
    return 1;
}
else{
    return 0;
}
}
int main()
{
    int t;
    char c[1000000];
    cin>>t;
    while(t--)
    {
        cin>>c;
        if(check(c)==1)
            cout<<"balanced"<<endl;
        else
            cout<<"not balanced"<<endl;
    }
}
