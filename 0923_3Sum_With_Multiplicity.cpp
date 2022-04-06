class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int mods = 1e9 + 7;
        int ans = 0;
        sort(arr.begin(), arr.end());
        for(int i = 0;i<arr.size(); i++){
            int T = target - arr[i];
            int j = i+1;
            int k = arr.size()-1;
            while(j<k){
                if(arr[j]+arr[k] < T){
                    j++;
                }
                else if(arr[j]+arr[k] > T){
                    k--;
                }
                else if(arr[j]!=arr[k]){    //arr[j]+arr[k] ==T
                    int count_j = 1;
                    int count_k = 1;
                    while(arr[j+1]==arr[j]){
                        count_j++;
                        j++;
                    }
                    while(arr[k-1]==arr[k]){
                        count_k++;
                        k--;
                    }
                    
                    ans += count_j*count_k;
                    ans = ans%mods;
                    j+=1;
                    k-=1;
                }
                else{                       //arr[j]+arr[k] == T && arr[j] = arr[k]
                    ans += (k-j)*(k-j+1) / 2;
                    ans = ans%mods;
                    break;
                }
            }
        }
        return ans;
    }
};
