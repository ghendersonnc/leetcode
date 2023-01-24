class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        queue1 = deque([p])
        queue2 = deque([q])

        while queue1:
            node1 = queue1.popleft()
            node2 = queue2.popleft()


            if node1 is None and node2 is None:
                continue
            elif node1 is None or node2 is None:
                return False
            elif node1.val != node2.val:
                return False

            queue1.append(node1.left)
            queue1.append(node1.right)

            queue2.append(node2.left)
            queue2.append(node2.right)

        return True