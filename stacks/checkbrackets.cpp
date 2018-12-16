#include<bits/stdc++.h>
bool checkBalanced(char *exp) {
	// Write your code here
  stack<char> s;
  char x;
  if(*exp=='}'||*exp==')'||*exp==']')
  {
    return false;
  }
while(*exp!=NULL)
{
  if(*exp=='(' || *exp=='{'|| *exp=='[')
{
  s.push(*exp);
  
}
  else if(*exp==')'||*exp=='}'|| *exp==']')
  {
    if(s.empty())
    {
      return false;
    }
    x=s.top();
    s.pop();
    if((x=='('&&*exp==')')||(x=='{'&&*exp=='}')||(x=='['&&*exp==']'))
       {
         continue;
       }
       else
       {
         return false;
       }
  }
 
  *exp=*exp+1;

}
  if(s.size()==0)
  {
     return true;
  }
  else
  {
    return false;
  }
 
  
}
       
