class Solution {
public:
    bool check(vector<int> &piles, int h, long long int v){
        int tempT = 0;
        for(int i = 0; i < piles.size(); i++){
            if(v >= piles[i]){
                tempT+=1;
            }
            else{
                if(!(piles[i]%v)){
                    tempT += piles[i]/v;
                }
                else{
                    tempT += piles[i]/v + 1;
                }
            }
        }
        return tempT <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int lo = 1;
        long long int hi = 0;
        for(int i = 0; i < piles.size(); i++){
            hi += piles[i];
        }
        while(lo < hi){
            cout<<"iter "<<lo<<" "<<hi<<endl;
            long long int mid = lo + (hi - lo)/2;
            if(check(piles, h, mid)){
                hi = mid;
            }
            else{
                lo = mid+1;
            }
        }
        return lo;
    }
};
