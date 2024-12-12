class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // find size of vector
        int k = 0;
        // for(vectork = 0; nums[k]!=NULL; k++);
        k = nums.size();

        // sliding window
        for(int i = 0; i < k; i++){
            if(nums[i]==val){
                for(int j=i;j<k-1;j++){
                    nums[j]=nums[j+1];
                }
            k--;
            i--;
            }
        }
        return k;
    }
};

// loop to find size
// size = 8;

// I - [0*,1,2,2,3,0,4,2]      val = 2
            //  i
            // ind
            //   ,i
            // ind
            //     ,i
            //  3,ind,i
// III - [0,1,2*,2,3,0,4,2] equal
//     [0,1,2*,3,0,4,2,2**] for copy j=i; j<size; j++; 
//     p++; p=1 =====> size = size - p; size=7
//     i--; 
// IV - [0,1,2*,3,0,4,2,2] equal
//     [0,1,3*,0,4,2,2,2] for j=i; j<size; j++; copy nums[j]=nums[j+1]; 
//     p++; p=2 =====> size = size - p; size=6
//     i--;
// VII - [0,1,3,0,4,2*,2,2] equal i=5
//     [0,1,3,0,4,2*,2,2] for j=i; j<size; j++; copy nums[j]=nums[j+1];
//     p++; p=3 =====> size = size - p; size=5
//     i--;
