class Solution {
public:
    double angleClock(int hour, int minutes) {
       
        double h = fmod((30 * (hour % 12)) + (minutes * 0.5), 360.0);
        double m=6*minutes;        
        

        return abs(h-m)>180?(360-abs(h-m)):(abs(h-m));
    }
};