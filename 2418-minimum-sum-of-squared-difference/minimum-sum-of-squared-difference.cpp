class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
      map<long long,long long>m;
long long k=k1+k2;
long long sum=0;
int mx=0;
        for ( int i=0;i<nums1.size();i++){
            int l=abs(nums1[i]-nums2[i]);
            sum+=l;
            m[l]++;
            mx=max(l,mx);
            
        } 
        if(sum<=k)return 0;
        for (auto it = m.rbegin(); it != m.rend()&&k>0; ++it) {
        int move=min(it->second,k);
        m[it->first-1]+=move;
        m[it->first]-=move;
        k-=move;

        }
       
        long long ans=0;
         
         for (auto it = m.rbegin(); it != m.rend(); ++it) {
        ans+=(long long)it->first*it->first*it->second;
    


        }
         return ans;


        
    }
};