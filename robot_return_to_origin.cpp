class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for(int i=0; i<moves.length(); i++){
            char mov = moves[i];
            if(mov == 'U'){
                y-=1;         
            } else if(mov == 'L'){
                x-=1;
            } else if(mov == 'R'){
                x+=1;
            } else {
                y+=1;
            }
        }
        if(x==0&&y==0)
            return true;
        else
            return false;
    }
};