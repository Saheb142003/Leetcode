class Solution {
public:
    int minOperations(string s, int k) {
        int n=s.length();
        int sz=0;
        for(auto &ch:s){
            if(ch=='0'){
                sz++;
            }
        }
        if(sz==0)return 0;
        vector<int>op(n+1,-1);
        
        set<int>odd;
        set<int>even;
        for(int i=0;i<=n;i++){
            if(i%2!=0){
                odd.insert(i);
            }
            else{
                even.insert(i);
            }
        }

        
        
        queue<int>q;
        q.push(sz);
        op[sz]=0;
        if(sz%2==0){
            even.erase(sz);
        }
        else{
            odd.erase(sz);
        }
        while(!q.empty()){
            int z=q.front();
            q.pop();
            int min_newz=z+k-2*min(k,z);
            int max_newz=z+k-2*max(0,k-n+z);
            set<int>&currset=(min_newz%2==0)?even:odd;
            auto it=currset.lower_bound(min_newz);
            while(it!=currset.end() and *it<=max_newz){
                int newZ=*it;
                if(op[newZ]==-1){
                    op[newZ]=op[z]+1;
                    if(newZ==0){
                        return op[newZ];
                    }
                q.push(newZ);
                }
            it=currset.erase(it);
            }
        }
        return -1;
    }
};