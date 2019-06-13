/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void pathSumUtil(TreeNode* A,int B,vector< vector<int> >&ans,vector<int> temp,int currsum){
     
     if(A ==NULL){
         return ;
     }
     
     temp.push_back(A->val);
      currsum+=A->val;
     if(A->left==NULL && A->right==NULL){
     if(currsum == B){
         ans.push_back(temp);
     }
     }
     
         pathSumUtil(A->left,B,ans,temp,currsum);
         pathSumUtil(A->right,B,ans,temp,currsum);
     
     temp.pop_back();
     currsum-=A->val;
 }


vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector< vector<int> > ans;
    vector<int > temp;
    pathSumUtil(A,B,ans,temp,0);
 
    return ans;
  
    
}
