class Solution {
  public:
    long long countBits(long long N) {
         // Create a vector to store the number of bits in the binary representation of each number.
            vector<int>temp(N+1 , 0);       
         // Initialize a variable to store the final result
            long long cnt = 0;   
        // Compute the number of bits in the binary representation of each number and store the result in temp.
            for(long long i = 1 ; i <= N ; i++)
            {
                 // If i is even, its number of bits is the same as its right-shifted value.
                if(i % 2 == 0)
                {
                    temp[i] = temp[i/2];
                }
                else
                {
                    // If i is odd, its number of bits is one more than its right-shifted value.
                    temp[i] = temp[i/2] + 1;
                }        
                // Add the number of bits in the binary representation of i to the final result.
                cnt += temp[i];
            }     
            return cnt;
    }
};
