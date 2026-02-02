class Solution {
    int getmax(vector<int>&arr){
        int max = arr[0];
        for(int i=0;i<=arr.size()-1;i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }
        return max;
    }
    int getmin(vector<int>&arr){
        int min = arr[0];
        for(int i = 0;i<=arr.size()-1;i++){
            if(arr[i]<min){
                min = arr[i];
            }
        }
        return min;
    }
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
       int Max = getmax(arr);
       int Min = getmin(arr);
        return{Min,Max};
        
    }
};