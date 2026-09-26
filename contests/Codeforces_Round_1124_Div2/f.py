from collections import defaultdict, deque
import sys


def main():
    lines = sys.stdin.read().splitlines()
    t = int(lines[0])

    for i in range(1, len(lines), 2):
        n = int(lines[i])
        nums = list(map(int, lines[i+1].split()))
        print(solve(nums))


# CORRECT BUT TOO SLOW FOR CONSTRAINTS
def solve(nums):
    graph = build_graph(nums)
    n = len(nums)
    result = 0
    for i in range(n):
        result += bfs(i, n, graph)
    return result


def bfs(start, n, graph):
    queue = deque([start])
    result = 0
    seen = set([start])
    steps = 0
    while queue:
        for _ in range(len(queue)):
            curr = queue.popleft()
            result += steps
            for neigh in graph[curr]:
                if neigh in seen:
                    continue
                queue.append(neigh)
                seen.add(neigh)
        steps += 1
    return result


def build_graph(nums):
    n = len(nums)
    graph = defaultdict(set)
    stack = []
    for i in range(n):
        while stack and nums[stack[-1]] < nums[i]:
            prev = stack.pop()
            graph[prev].add(i)
        for j in range(i):
            graph[i].add(j)
        stack.append(i)
    return graph


if __name__ == "__main__":
    main()
