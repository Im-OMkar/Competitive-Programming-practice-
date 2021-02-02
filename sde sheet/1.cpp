int findn(vector<int >v; int n){
	int slow=v[0], fast=v[0];

	do{
		slow=v[slow];
		fast=v[v[fast]];
	}while(slow!=fast);

	fast=v[0];
	while(slow!=fast){
		slow=v[slow];
		fast=v[fast];
	}
	return slow;

}
