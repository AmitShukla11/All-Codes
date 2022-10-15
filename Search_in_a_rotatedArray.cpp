class Solution {
public:
    int
search (vector < int >&nums, int target)
{
  int l = 0, h = nums.size () - 1;
  while (h - l > 1)
    {
      int mid = (h + l) / 2;
      if (target < nums[0])
	{
	  if (nums[mid] < nums[0])
	    {
	      if (nums[mid] >= target)
		h = mid;
	      else
		l = mid;
	    }
	  else
	    l = mid;
	}
      else
	{
	  if (nums[mid] >= nums[0])
	    {
	      if (target <= nums[mid])
		{
		  h = mid;
		}
	      else
		l = mid;
	    }
	  else
	    h = mid;
	}
    }

  if (nums[h] == target)
    return h;
  else if (nums[l] == target)
    return l;
  else
    return -1;
}
};
