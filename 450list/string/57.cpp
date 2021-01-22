class Solution{
public:


	int isPlaindrome(string S)
	{
	    int l=0;
	    int r= S.length()-1;
	    while(r>=1){
	        if(S[l++] != S[r--]) return 0;
	    }

	    return 1;
	    // Your code goes here
	}

};
