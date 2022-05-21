/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    unordered_map<int,pair<int,vector<int>>> m;
    int res=0;// total importance ke lie
    
    void calculate(int id){
        res+=m[id].first;
        
        for(auto x:m[id].second){
            calculate(x);
        }
    }
    
    int getImportance(vector<Employee*> employees, int id) {
        for(auto x:employees){
            m[x->id]={x->importance,x->subordinates};
        }
        calculate(id);
        return res;
    }
};