void reverse(char *str, int len)
{
// Your code goes here
    stack<char> s;
    int i=0;
    while(str[i]!='\0'){
        s.push(str[i]);
        i++;
    }
    i=0;
    while(!s.empty()){
        str[i++]=s.top();
        s.pop();
    }
}
