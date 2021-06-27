class solution
{
    
public:
void func(int idx, int summ, vector<int> &arr, vector<int> &sum, int N ){
    if(idx==N){
        sum.push_back(summ);
        return;
    }
    
    func(idx+1, summ+arr[idx], arr, sum, N);
    func(idx+1, summ, arr, sum, N);
}
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {vector<int> sum;
    func(0,0,arr,sum,N);
    sort(sum.begin(), sum.end());
       return sum;
    }
};