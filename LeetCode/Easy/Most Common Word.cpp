//https://leetcode.com/problems/most-common-word/description/


class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        string nw;
        unordered_map<string,int> mp;
        unordered_map<string,int> ban;

        string aux;
        int mx = 0;

     for(string s : banned){
        ban.insert({s,1});
     }

     for(char c : paragraph){
        if(!ispunct(c)){
            if(isupper(c)){
                c += 32;
                nw += c;
            }else{
                nw += c;
            }
        }else{
            nw += ' ';
        }
     }        
       stringstream ss(nw); 

    while(ss >> aux){
        mp[aux]++;
    }
    aux = "";
    for(auto [word, freq] : mp){
       
        if(mx < freq && !ban.count(word)){
                aux = word;
                mx = freq;
        }
    }      

    return aux;
    }    
};