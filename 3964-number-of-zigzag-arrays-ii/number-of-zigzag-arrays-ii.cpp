class Solution {
public:
  
          static const int MOD = 1e9 + 7;

    using Matrix = vector<vector<long long>>;

    Matrix multiply(Matrix &A, Matrix &B){

        int sz = A.size();

        Matrix C(sz, vector<long long>(sz,0));

        for(int i=0;i<sz;i++){

            for(int k=0;k<sz;k++){

                if(A[i][k]==0)
                    continue;

                for(int j=0;j<sz;j++){

                    if(B[k][j]==0)
                        continue;

                    C[i][j] =
                    (C[i][j] + A[i][k]*B[k][j])%MOD;
                }
            }
        }

        return C;
    }

    Matrix power(Matrix base,long long exp){

        int sz = base.size();

        Matrix ans(sz, vector<long long>(sz,0));

        for(int i=0;i<sz;i++)
            ans[i][i]=1;

        while(exp){

            if(exp&1)
                ans=multiply(ans,base);

            base=multiply(base,base);

            exp>>=1;
        }

        return ans;
    }

    int zigZagArrays(int n, int l, int r) {

        int k = r-l+1;

        if(n==2)
            return (1LL*k*(k-1))%MOD;

        int sz = 2*k;

        // length=2 state
        vector<long long> state(sz);

        for(int v=1;v<=k;v++){

            state[v-1]=v-1;

            state[k+v-1]=k-v;
        }

        // transition matrix
        Matrix T(sz, vector<long long>(sz,0));

        for(int v=1;v<=k;v++){

            // newPos[v]
            for(int u=1;u<v;u++){

                T[v-1][k+u-1]=1;
            }

            // newNeg[v]
            for(int u=v+1;u<=k;u++){

                T[k+v-1][u-1]=1;
            }
        }

        Matrix P = power(T,n-2);

        vector<long long> finalState(sz);

        for(int i=0;i<sz;i++){

            for(int j=0;j<sz;j++){

                finalState[i] =
                (finalState[i] +
                 P[i][j]*state[j])%MOD;
            }
        }

        long long ans=0;

        for(long long x: finalState)

            ans=(ans+x)%MOD;

        return ans;
    }
};

//The only difference from Part I is replacing the for(len=3..n) loop with matrix exponentiation because n can be 10^9.