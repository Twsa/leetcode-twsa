/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    static int a[2]={0};
	for (int i = 0; i < numsSize - 1; i++)
	{
		for (int j = i+1; j < numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				a[0] = i;
				a[1] = j;
				break;
			}
		}
	}
	return a;
}

int main()
{
	int a[4]={11,2,7,15};
	int *p=twoSum(a,4,9);
	return 0;
}

// @lc code=end

