/*#include<iostream>
using namespace std;
#include<vector>
vector <int> a;
class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int a = nums.size() + 1;
		static int size=nums.size();
		static int max = nums[0];
		a--;
		static int cnt = 0;
		if (a == 1)
		{
			max = nums[0];
			cnt++;
			return max;
		}
		vector <int> cop = nums;
		cop.pop_back();
		int b;
		if ( (b=maxSubArray(cop))> 0)
		{
			 
			if (b + nums.back() > max)
			{
				max = b + nums.back();
			}
			cnt++;
			if (cnt != size)
				return (b + nums.back());
			else
				return max;

		}
		else
		{
			if (nums.back() > max)
				max = nums.back();
			cnt++;
			if (cnt != size)
				return nums.back();
			else
				return max;
		}

	}
};

int main()
{
	int n;
	cin>>n;
	int m;
	for (int i = 0; i < n; i++)
	{
		cin>>m;
		a.push_back(m);
	}
	Solution s;
	cout<<s.maxSubArray(a);
}*/