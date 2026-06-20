class Solution {
public:
    int maxBuilding(int n, vector<vector<int>>& restrictions) {
        
        restrictions.push_back({1,0});

        bool found = false;

        for(auto &x: restrictions){

            if(x[0]==n){
                found=true;
                break;
            }
        }

        if(!found)
            restrictions.push_back({n,(int)1e9});

        sort(restrictions.begin(),restrictions.end());

        int m = restrictions.size();

        // left -> right
        for(int i=1;i<m;i++){
             int d = restrictions[i][0]-restrictions[i-1][0];

            restrictions[i][1]=min(
                restrictions[i][1],
                restrictions[i-1][1]+d
            );
        }

        // right -> left
        for(int i=m-2;i>=0;i--){

            int d = restrictions[i+1][0]-restrictions[i][0];

            restrictions[i][1]=min(
                restrictions[i][1],
                restrictions[i+1][1]+d
            );
        }

        long long ans=0;

        for(int i=0;i<m-1;i++){

            long long a=restrictions[i][0];
            long long h1=restrictions[i][1];

            long long b=restrictions[i+1][0];
            long long h2=restrictions[i+1][1];

            long long d=b-a;

            long long peak=(h1+h2+d)/2;

            ans=max(ans,peak);
        }

        return ans;
    

    }
};