//
// Created by sark2 on 19-09-2019.
//

#include "bits/stdc++.h"

using namespace std;
#define IOS cin.sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define cases int t;cin>>t;while(t--)
typedef long double ld;
typedef long long ll;
ll mod = 1e9 + 7;

struct Node{
    char data;
    bool end;
    unordered_map<char,Node*>children;
    Node(){}
    Node(char data) : data(data), end(false){}
};

class Trie{
    Node* root;

    int nodes;  //Number of Nodes
    int words;  //Number of words in Trie.

    vector<string>helper;

    bool search(Node* n, string s, int idx){
        if(idx == s.length()){
            return n->end;
        }

        char ch = s[idx];
        if(n->children.count(ch)==0){
            return false;
        }else{
            Node* child = n->children[ch];
            return search(child, s, idx+1);
        }

    }

    void add(Node* temp, string word, int idx){
        char ch = word[idx];
        if(idx == word.length()){
            words++;
            temp->end = true;
            return;
        }

        if(temp->children.count(ch) == 0){
            nodes++;

            Node* nn = new Node(ch);

            temp->children[ch] = nn;
            add(nn, word, idx + 1);
        }else{
            Node* child = temp->children[ch];
            add(child, word, idx+1);
        }
    }

    void display(Node* temp, string wsf){
        if(temp->end){
            helper.push_back(wsf);
        }
        for(auto i : temp->children){
            display(i.second, wsf + string(1, i.first));
        }
    }

    void remove(Node* temp, string word, int idx){
        if(idx == word.length()){
            words--;
            temp->end = false;
            return;
        }
        char ch = word[idx];
        Node* child = temp->children[ch];
        remove(child, word, idx+1);

        if(!child->end && child->children.empty()){
            nodes--;
            temp->children.erase(ch);
            delete child;
        }
    }

    void displayTrie(Node* temp){
        cout<<temp->data<<" : ";
        for(auto i : temp->children){
            cout<<i.first<<((i.second->end)?"*":"")<<", ";
        }
        cout<<". "<<endl;

        for(auto i : temp->children){
            displayTrie(i.second);
        }
    }

    void searchPrefix(Node* temp, string p, int idx, string wsf){
        if(idx == p.length()){
            display(temp,wsf);
        }else{
            if(temp->children.count(p[idx])==0){
                helper.push_back("0");
                return;
            }
            searchPrefix(temp->children[p[idx]],p,idx+1,wsf+string(1,p[idx]));
        }
    }

public :
    Trie(){
    root = new Node('$');
    nodes = 1;
    words = 0;
}

    bool search(string s){
    return search(root,s,0);
}

    void add(string word){
        if(!search(word))
            add(root, word, 0);
    }

    void display(){
        display(root, "");
        for(auto s : helper){
            cout<<s<<"\n";
        }
    }

    void remove(string word){
        if(search(word))
            remove(root, word, 0);
    }

    void displayTrie(){
        displayTrie(root);
    }

    void searchPrefix(string p){

        for(int i = 0; i < p.length(); i++){
            searchPrefix(root, p.substr(0,i+1),0,"");
            sort(helper.begin(), helper.end());
            for(auto s : helper){
                cout<<s<<" ";
            }
            helper.clear();
            cout<<"\n";
        }
    }
};

int main() {
    IOS

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Trie trie;

        for(int i = 0; i < n; i++){
            string s;
            cin>>s;
            trie.add(s);
        }

        string query;
        cin>>query;

        trie.searchPrefix(query);
    }


}
