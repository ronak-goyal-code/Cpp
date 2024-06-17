#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        for(int i=0; i<m; i++){
            if(grid[i][0]==0){
                for(int j=0; j<n; j++){
                    if(grid[i][j]==0){
                        grid[i][j] = 1;
                    }

                    else{
                        grid[i][j] = 0;
                    }
                }
            }
        }

        for(int j=0; j<n; j++){
            int noo = 0;
            int noz = 0;
            for(int i=0; i<m; i++){
                if(grid[i][j]==0){
                    noz++;
                }

                else{
                    noo++;
                }
            }

            if(noo<noz){
                for(int i=0; i<m; i++){
                    if(grid[i][j]==0){
                        grid[i][j] = 1;
                }

                    else{
                        grid[i][j] = 0;
                    }
                }
            }
        }

        int score = 0;
        for(int i=0; i<m; i++){
            int sum = 0;
            for(int j=0; j<n; j++){
                sum += grid[i][j]*pow(2,n-j-1);
            }
            score += sum;
        }

        return score;

    }