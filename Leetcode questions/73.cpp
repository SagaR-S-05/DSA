#include<bits/stdc++.h>
using namespace std;

void setzeros(vector<vector<int>> &matrix)
{
    if(matrix.empty() || matrix[0].empty()) return;

    int rows=matrix.size();
    int cols=matrix[0].size();
    vector <pair<int,int>> zeropair;
    
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(matrix[i][j]==0)
            {
                zeropair.push_back({i,j});
            }
        }
    }

    for(int k=0;k<zeropair.size();k++)
    {
        int row=zeropair[k].first;
        int col=zeropair[k].second;

        for(int i=0;i<cols;i++)
        {
            matrix[row][i]=0;
        }

         for(int j=0;j<rows;j++)
        {
            matrix[j][col]=0;
        }

    }
}

int main()
{
    int rows;
    cin>>rows;
    int cols;
    cin>>cols;
    vector<vector<int>> matrix(rows,vector<int>(cols));
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>matrix[i][j];
        }
    }
    setzeros(matrix);
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}