class Solution {
public:
    double angleClock(int hour, int minutes) {
       
        double h = fmod((30 * (hour % 12)) + (minutes * 0.5), 360.0);
        return abs(h-6*minutes)>180?(360-abs(h-6*minutes)):(abs(h-6*minutes));
    }
};