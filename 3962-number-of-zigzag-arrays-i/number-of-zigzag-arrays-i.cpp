class Solution {
public:
    static const int MOD = 1e9 + 7;
    int zigZagArrays(int n, int l, int r) {
      
int k = r - l + 1;

        vector<long long> pos(k+1), neg(k+1);
        vector<long long> prefixPos(k+1);
        vector<long long> prefixNeg(k+1);
        vector<long long> newPos(k+1);
        vector<long long> newNeg(k+1);

        for(int v=1; v<=k; v++){

            pos[v]=v-1;

            neg[v]=k-v;
        }

        for(int len=3; len<=n; len++){

            fill(prefixPos.begin(), prefixPos.end(), 0);
            fill(prefixNeg.begin(), prefixNeg.end(), 0);

            for(int i=1;i<=k;i++){

                prefixPos[i]=(prefixPos[i-1]+pos[i])%MOD;

                prefixNeg[i]=(prefixNeg[i-1]+neg[i])%MOD;
            }

            for(int v=1;v<=k;v++){

                newPos[v]=prefixNeg[v-1];

                newNeg[v]=(prefixPos[k]-prefixPos[v]+MOD)%MOD;
            }

            pos.swap(newPos);

            neg.swap(newNeg);
        }

        long long ans=0;

        for(int v=1;v<=k;v++){

            ans=(ans+pos[v])%MOD;

            ans=(ans+neg[v])%MOD;
        }

        return ans;
    }
};

