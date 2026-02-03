class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        int n = arr.size();
        for(int i=0;i<n-1;i++){
           //assuming index to be the minimum 
           // as it acts as minimum position
           
           int index = i;
           //taking another pointer j to traverse along the unsorted array
           //to find actual minimu by comparing with the index element and
           //swapping them index and i after finding actual minimum
           
           for(int j=i+1;j<n;j++){
               if(arr[j]<arr[index]){
                   index = j;
               }
           }
           swap(arr[index],arr[i]);
        }
    }
};