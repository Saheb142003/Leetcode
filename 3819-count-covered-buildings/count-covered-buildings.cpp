class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& b) {
        int m=b.size();
        if( m<=4) return 0;
       
        unordered_map<int,pair<int,int>>hor;
        unordered_map<int,pair<int,int>>ver;

        for(auto i:b){
            int x=i[0];
            int y=i[1];
            if(!hor.count(y)){
                hor[y]={INT_MAX,INT_MIN};
            }
            if(!ver.count(x)){
                ver[x]={INT_MAX,INT_MIN};
            }
            hor[y].first=min(hor[y].first,x);
            hor[y].second=max(hor[y].second,x);

            ver[x].first=min(ver[x].first,y);
            ver[x].second=max(ver[x].second,y);
        }
        int count=0;
        for(auto i:b){
            int x=i[0];
            int y=i[1];

            if(hor[y].first<x and hor[y].second>x
            and ver[x].first<y and ver[x].second >y
            ){
                count++;
            }

        }

        return count;


    }
};