class Solution {
public:
    double angleClock(int hour, int minutes) {
        double mint=0,h=0;
         double t=(minutes*30.0)/60;
       
     
            h=hour%12;
        h=(30*h);
        h+=t;
        
            cout<<h;
            mint=6*minutes;
            cout<<mint;
            double ans= abs(h-mint);
            ans= min(ans,360-ans);
            return ans;
        
    }
};