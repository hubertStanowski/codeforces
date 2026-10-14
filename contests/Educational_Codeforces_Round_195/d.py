from typing import Any


from collections import defaultdict
import sys


def main():
    lines = sys.stdin.read().splitlines()
    t = int(lines[0])
    i = 1

    while i < len(lines):
        n, m = map(int, lines[i].split())
        graph = defaultdict[int, list](int)
        i += 1
        for _ in range(m):
            u, v = map(int, lines[i].split())
            graph[u] += 1
            graph[v] += 1
            i += 1

        print(solve(n, m, graph))


def solve(n, m, graph):
    if len(graph) < n:
        return "Brain Melt"
    if m == n-1 and max(graph.values()) == n-1:
        return 2
    return "Many"


if __name__ == "__main__":
    main()
