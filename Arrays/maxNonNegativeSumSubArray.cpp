vector<int> Solution::maxset(vector<int> &Vec) {
    int N = Vec.size();
    long long mx_sum = 0;
    long long cur_sum = 0;
    int mx_range_left = -1;
    int mx_range_right = -1;
    int cur_range_left = 0;
    int cur_range_right = 0;

    while(cur_range_right < N) {
        if(Vec[cur_range_right] < 0) {
            cur_range_left = cur_range_right + 1;
            cur_sum = 0;
        } else {
            cur_sum += (long long)Vec[cur_range_right];
            if(cur_sum > mx_sum) {
                mx_sum = cur_sum;
                mx_range_left = cur_range_left;
                mx_range_right = cur_range_right + 1;
            } else if(cur_sum == mx_sum) {
                if(cur_range_right + 1 - cur_range_left > mx_range_right - mx_range_left) {
                    mx_range_left = cur_range_left;
                    mx_range_right = cur_range_right + 1;
                }
            }
        }
        cur_range_right++;
    }
    vector<int> ans;
    if(mx_range_left == -1 || mx_range_right == -1)
            return ans;

    for(int i = mx_range_left; i < mx_range_right; ++i)
            ans.push_back(Vec[i]);
    return ans;
}
