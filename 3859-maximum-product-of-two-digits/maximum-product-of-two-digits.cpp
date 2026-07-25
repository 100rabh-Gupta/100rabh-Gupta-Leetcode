class Solution {
public:
    int maxProduct(int n) {
           int first=0;
           int sec=0;

    while(n){
        int ele= n%10;
        n/=10;
        if ( ele>=first){
        sec=first;
        first= ele;
        }
        if (sec<ele&&first>ele){sec=ele;}

    }
    return sec*first;
        
    }
};