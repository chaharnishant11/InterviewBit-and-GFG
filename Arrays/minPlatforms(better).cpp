using namespace std;

struct trainInfo {
    int time;
    int trainNo;
};

bool cmp(struct trainInfo x, struct trainInfo y) {
    return (x.time < y.time);
}

int minNoOfPlatforms(struct trainInfo arr[], struct trainInfo dep[], int n) {
    sort(arr, arr + n, cmp);
    sort(dep, dep + n, cmp);

    int i = 1, j = 0, plat = 1, res = 1;
    while(i < n and j < n) {
        if((arr[i].time < dep[j].time and arr[i].trainNo != dep[j].trainNo) or (arr[i].time <= dep[j].time and arr[i].trainNo == dep[j].trainNo)) {
            plat++;
            i++;
            if(plat > res)  res = plat;
        } else {
            plat--;
            j++;
        }
    }
    return res;
}

int main(int argc, char const *argv[]) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        struct trainInfo arrival[n], departure[n];
        for(int i=0; i<2*n; i++) {
            if(i < n) {
                cin >> arrival[i].time;
                arrival[i].trainNo = i;
            } else {
                cin >> departure[i - n].time;
                departure[i - n].trainNo = i - n;
            }
        }
        for(int i=0; i<n; i++) {
            if(departure[i].time < arrival[i].time)   departure[i].time += 2400;
        }
        cout << minNoOfPlatforms(arrival, departure, n) << endl;
    }
    return 0;
}
