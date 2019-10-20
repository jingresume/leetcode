#include<iostream>
#include<vector>

using namespace std;

class Solution{
	public:
		int removeElement(vector<int>& nums,int val){
			int len = nums.size();
			int index = len-1;
			for(int i=0; i<len; i++){
				if(i>index) break;
				if(nums[i]==val){
					nums[i]=nums[index--];
					i--;
				}
			}
			return index+1;
		}
};

int main()
{
	Solution solve = Solution();
	vector<int> test = {3,2,2,3};
	int val = 3;

	vector<int> test1 = {0,1,2,2,3,0,4,2};
	int val1 = 2;
	int len = solve.removeElement(test1,val1);
	cout << len << endl;
	for(int i=0; i<len; i++){
		cout << test1[i] << ' ' ;
	}
	cout << endl;
	return 0;
}
