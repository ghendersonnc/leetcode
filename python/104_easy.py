class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        queue = collections.deque([(root, 1)])
        result = 0
        while queue:
            node, count = queue.popleft()

            if node:
                result = max(result, count)
                queue.append((node.left, count+1))
                queue.append((node.right, count+1))