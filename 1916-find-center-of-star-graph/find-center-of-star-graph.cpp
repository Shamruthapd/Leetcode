class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        /*vector<int> v;
        v.push_back(edges[0][0]);
        v.push_back(edges[0][1]);
        v.push_back(edges[1][0]);
        v.push_back(edges[1][1]);
        int p;
        for(int i=0;i<4;i++){
            int c=count(v.begin(),v.end(),v[i]);
            if(c>1){
                p=v[i];
            }
        }  
        return p;*/
        if (edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1])
            return edges[0][0];
        else
            return edges[0][1];
    }
};