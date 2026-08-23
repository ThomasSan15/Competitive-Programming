//https://leetcode.com/problems/group-anagrams/description/


//My first solution: 

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      vector<int> use(strs.size() , 0);
      vector<vector<string>> ans;
      string aux1;
      string aux2;

       for(int i = 0, k = 0; i < strs.size(); i++){
         if(use[i] == 0){
            use[i] = 1;
            ans.push_back({strs[i]});
            aux1 = strs[i];
            sort(aux1.begin(), aux1.end());
                for(int j = i + 1; j < strs.size(); j++){
                    if(strs[i].size() == strs[j].size()){
                        aux2 = strs[j];
                        sort(aux2.begin(), aux2.end());
                            if(aux1 == aux2){
                             ans[k].push_back(strs[j]);
                             use[j] = 1;
                            }
                    }

                }
            k++;
         }
       }
       return ans;
    }
};

//Best solution to this problem:

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string,vector<string>> mp; 
      vector<vector<string>> ans;

        for(string s : strs){
            string aux = s;
            sort(aux.begin(),aux.end());
            mp[aux].push_back(s);
        }

        for(auto val : mp ){
            ans.push_back(val.second);
        }

        return ans;

    }
};