class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        std::vector<int> result;
        std::map<int,int> numTable;  
        // create a hash table maps numbers to indices
        for(std::vector<int>::size_type i=0;i<numbers.size();i++){
            numTable[numbers.at(i)] = i+1;
        }
        for(std::vector<int>::size_type i=0;i<numbers.size();i++){
            // 
            std::map<int,int>::const_iterator it = numTable.find(target - numbers.at(i));
            if(it->second==i+1)continue;
            if(it!=numTable.end()){
                if(it->second<i+1){
                result.push_back(it->second);
                result.push_back(i+1);
                }
                else{
                result.push_back(i+1);
                result.push_back(it->second);
                }
                break;
            }
        }
        return result;
      
    }
};
