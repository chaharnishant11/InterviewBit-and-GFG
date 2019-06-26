int removeMin() {
        // Complete this function
        if(pq.size()==0){
            return -1;
        }
        int temp=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        int n=pq.size();
        int pi=0;
        int c1,c2,mi;
        while(pi<pq.size()){
            c1=2*pi+1;
            c2=2*pi+2;
            if(c1<n && c2<n){
                if(pq[c1]<pq[c2]){
                    mi=c1;
                }else{
                    mi=c2;
                }
                if(pq[pi]>pq[mi]){
                    int t=pq[pi];
                    pq[pi]=pq[mi];
                    pq[mi]=t;
                }
            }else if(c1<n && c2>=n){
                mi=c1;
                if(pq[pi]>pq[mi]){
                    int t=pq[pi];
                    pq[pi]=pq[mi];
                    pq[mi]=t;
                }
            }else if(c1>=n && c2<n){
                mi=c2;
                if(pq[pi]>pq[mi]){
                    int t=pq[pi];
                    pq[pi]=pq[mi];
                    pq[mi]=t;
                }
            }else{
                break;
            }
            pi=mi;
        }
        return temp;
    }
