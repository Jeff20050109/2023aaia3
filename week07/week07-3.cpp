class Solution {
public:
    bool isRobotBounded(string instructions) {
        for(char c:instructions){
            if(c=='U') y--;
            if(c=='D') y++;
            if(c=='L') x--;
            if(c=='R') x++;
        }
        if(x==0 && y==0) return true;
        else return false;
    }
};
