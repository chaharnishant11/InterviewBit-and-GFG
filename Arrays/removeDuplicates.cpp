#include<iostream>
#include<vector>
#include<set>


vector<int> removeDuplicates(vector<int> input){

    // Write your code here
    vector<int>::iterator it1;
    set<int> s;
    set<int>::iterator it2;
    vector<int> w;
    for(it1=input.begin();it1!=input.end();it1++)
      s.insert(*it1);
    for(it2=s.begin();it2!=s.end();it2++){
      w.push_back(*it2);
    }
    return w;
    
}


int main(){
    
    int size;
    cin >> size;
    
    vector<int> input;
    
    for(int i = 0; i < size; i++){
        int a;
	cin >> a;
        input.push_back(a);
    }
    
    vector<int> output = removeDuplicates(input);
    for(int i = 0; i < output.size(); i++){
        cout << output[i] << " ";
    }
}








