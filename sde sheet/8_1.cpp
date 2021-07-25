struct meeting{
    int start;
    int end;
    int pos;
};

class Solution
{
    static bool comp(struct meeting m1,struct meeting m2){
        if(m1.end<m2.end) return true;
        else if(m1.end>m2.end) return false;
        else if(m1.pos>m2.pos) return true;
        return false;
    }
    
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    
    
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here 
        struct meeting meet[n];
        for(int i=0; i<n; i++){
            meet[i].start=start[i]; meet[i].end=end[i]; meet[i].pos=i;
        }
        
        sort(meet, meet + n, comp);
        
        int limit=meet[0].end;
        int c=1;
        
        for(int i=1; i<n; i++){
            if(meet[i].start>limit){
                c++;
                limit=meet[i].end;
            }
        }
        return c;
    }
};