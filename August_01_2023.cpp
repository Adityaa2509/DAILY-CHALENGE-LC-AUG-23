// Combinations --> LC - 77
// It is a extended question of Combinations -I and where you are given n and k and you have to return all the possible subsequence of size k fron range [1,n]
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>res;
void solve(vector<int>& ans,int i,int n,int k)
{
    if(i == n+1)
    {
        if(ans.size() == k)
        {
            res.push_back(ans);
        }
        return ;
    }
    //pick
    ans.push_back(i);
    solve(ans,i+1,n,k);
    ans.pop_back();
    //not pick
    solve(ans,i+1,n,k);
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>ans;
    
    solve(ans,1,n,k);
    
    for(int i=0;i<res.size();i++)
    {
        cout<<"[ ";
        for(auto it : res[i])cout<<it<<" , ";
        cout<<"]"<<endl;
    }

}