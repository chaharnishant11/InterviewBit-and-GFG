bool checkLarger(int a, int b){
    string aa = to_string(a);
    string bb = to_string(b);
    string st = aa + bb;
    string rev = bb + aa;

    if(st > rev){
        return true;
    }

    return false;
}

string Solution::largestNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<int> sol = A;

    sort(sol.begin(), sol.end(), checkLarger);

    string ans = "";
    for(int i = 0; i < sol.size(); i++){
        ans = ans + to_string(sol[i]);
    }

    if(ans[0] == '0'){
        return "0";
    }

    return ans;
}
