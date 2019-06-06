/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

 bool check(Interval a,Interval b){
     return (a.start<b.start);
 }

vector<Interval> Solution::merge(vector<Interval> &A) {
    sort(A.begin(),A.end(),check);
    stack<Interval> s;
    s.push(A[0]);
    for(int i=0;i<A.size();i++){
        Interval top = s.top();
        if(top.end<A[i].start){
            s.push(A[i]);
        }
        else if(top.end<A[i].end){
            top.end=A[i].end;
            s.pop();
            s.push(top);
        }
    }

    vector<Interval> ret;
    while(!s.empty()){
        ret.push_back(s.top());
        s.pop();
    }

    sort(ret.begin(),ret.end(),check);

    return ret;

}
