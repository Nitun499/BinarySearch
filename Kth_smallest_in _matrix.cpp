#include<bits/stdc++.h>
#define fr(i, n) for (int i = 0; i < n; i++)
using namespace std;
int Count(int x,vector<vector<int>> &v){
   int i=v.size()-1;
   int j=0;
   int cnt=0;
   while(i>=0 &&j<v[0].size()){
       if(v[i][j]>x){
           i--;
       }
       else{
          cnt+=i+1;
          j++; 
       }
   }
   return cnt;
}

int main(){
    vector<vector<int>> mat={{1,5,9},{10,11,13},{12,13,15}};
    int ans=mat[0][0];
    int k=8;
    int row=mat.size();
    int col=mat[0].size();
    int low=mat[0][0],high=mat[row-1][col-1];
    while(low<=high){
        int mid=low+(high-low)/2;
        int count=Count(mid,mat);
        if(count>=k){
             ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<ans;
    return 0;
    
}