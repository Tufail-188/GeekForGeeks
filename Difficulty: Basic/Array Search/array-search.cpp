class Solution {
  public:
    int search(vector<int>& arr, int x) {
        for(int i = 0;i<=arr.size()-1;i++){
            if(arr[i]==x){
                return i;
            }
        }
        return -1;
    }
};