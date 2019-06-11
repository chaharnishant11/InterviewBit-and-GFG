using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        // Select 1st element as majority element
        int majority_index=0;
        int count=1;

        for(int i=1;i<n;i++){

            // If same then increment it's count
            if(v[i]==v[majority_index]){
                count++;
            }
            // If different cancel it's count
            else{
                count--;
            }

            // If count reduces to zero select current element as majority element and set count to 1
            if(count==0){
                majority_index=i;
                count=1;
            }

        }

        // It returns majority element candidate so check if it's count>n/2
        count=0;
        for(int i=0;i<n;i++){
            if(v[i]==v[majority_index]){
                count++;
            }
        }
        if(count>n/2){
            cout<<v[majority_index]<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
}
