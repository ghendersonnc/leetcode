class Solution:
    def shortestPathBinaryMatrix(self, grid: List[List[int]]) -> int:
        if grid[0][0] != 0 or grid[-1][-1] != 0:
            return -1

        N = len(grid)
        dirs = [(-1, -1), (-1, 0), (-1, 1), (0, -1), (0, 1), (1, -1), (1, 0), (1, 1)]
        queue = deque()
        queue.append((0,0))

        visited = {(0,0)}

        def helper(x, y):
            for x_dir, y_dir in dirs:
                row = x + x_dir
                col = y + y_dir

                if 0 <= row < N and 0 <= col < N and not grid[row][col] and (row, col) not in visited:
                    yield (row, col)

        cur_dist = 1
        while queue:
            length = len(queue)

            for _ in range(length):
                row, col = queue.popleft()

                if row == N-1 and col == N-1:
                    return cur_dist

                for p in helper(row, col):
                    visited.add(p)
                    queue.append(p)

            cur_dist += 1

        return -1