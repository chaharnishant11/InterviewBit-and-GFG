#include<list>
using namespace std;

map<int,int> mp;
int sz;
list<int> lst;

LRUCache::LRUCache(int capacity) {

    mp.clear();
    sz=capacity;
    lst.clear();


}

int LRUCache::get(int key) {
    if(mp.find(key)==mp.end()) return -1;

    lst.remove(key);
    lst.push_back(key);

    return mp[key];
}

void LRUCache::set(int key, int value) {
    if(sz==0) return;
    if(mp.find(key)!=mp.end())
    {
        lst.remove(key);

        lst.push_back(key);
        mp[key]=value;

        return;
    }
    if(lst.size()<sz)
    {
        lst.push_back(key);
        mp[key]=value;
        return;
    }
    map<int,int>::iterator it=mp.find(lst.front());
    mp.erase(it);
    lst.pop_front();
    lst.push_back(key);
    mp[key]=value;
}
