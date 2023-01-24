class Solution:
    def maxArea(self, height: List[int]) -> int:
        left_pointer = 0
        right_pointer = len(height) - 1
        area = 0
        max_area = min(height[left_pointer], height[right_pointer]) * (right_pointer - left_pointer)

        while left_pointer <= right_pointer:

            if height[left_pointer] < height[right_pointer]:
                left_pointer += 1
            elif height[left_pointer] >= height[right_pointer]:
                right_pointer -= 1

            area = min(height[left_pointer], height[right_pointer]) * (right_pointer - left_pointer)

            if area > max_area:
                max_area = area

        return max_area