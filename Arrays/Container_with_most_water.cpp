class Solution {
public:
	int maxArea(vector<int>& height) {
		int i = 0;
		int j = height.size() - 1;
		int max_ = 0;

		while (j >= i) {
			int w = abs(j - i);
			int h = min(height[j], height[i]);

			int area = w * h;
			max_ = max(area, max_);
			if (height[j] >= height[i]) {
				i++;
			}
			else {
				j--;
			}
		}
		return max_;
	}
};