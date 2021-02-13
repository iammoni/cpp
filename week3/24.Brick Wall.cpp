    int leastBricks(vector<vector<int>>& wall) {
//         map<int,int> widths;
//         auto result=wall.size();
//         for(const auto& row:wall){
            
//          for(auto i=0,width=0;i<row.size()-1;++i){
//              result=min(result,wall.size()-(++widths[width+=row[i]]));
//          }  
            
//         }
        
//         return result;
        map<int,int>m;
        for(int i=0;i<wall.size();i++){
            for(int j=1;j<wall[i].size()-1;j++){
                wall[i][j]=wall[i][j]+wall[i][j-1];
            }
        }
        for(int i=0;i<wall.size();i++){
            for(int j=0;j<wall[i].size()-1;j++){
                //wall[i][j]=wall[i][j]+wall[i][j-1];
                m[wall[i][j]]++;
            }
        }
        
        int max=0;
        for(auto x:m){
            if(x.second>max){
                max=x.second;
            }
        }
        
        return wall.size()-max;
    }