class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int n = A.size();
     int s = 0 , e = n-1;
     if (n == 1) return A[0];
     while(s<=e) {
     int mid = s + (e-s)/2;
     if(mid == 0 && A[0] != A[1]){
        return A[mid];
     }
     if(mid == n-1 && A[n-1] != A[n-2]){
        return A[mid];
     }
     if(A[mid] != A[mid-1] && A[mid] != A[mid+1]){
        return A[mid];
     } 
     if(mid%2 == 0){
        if(A[mid] == A[mid-1]){
            e = mid-1;
        } else{
            s = mid+1;
        }
     } else{  if(A[mid] == A[mid-1]){
        s = mid+1;
     } else{
        e = mid-1;
     }

     } }
        
  return -1;  }
};