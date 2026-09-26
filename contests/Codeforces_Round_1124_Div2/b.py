from functools import lru_cache
from math import comb
import sys
from collections import Counter


def main():
    lines = sys.stdin.read().splitlines()
    t = int(lines[0])

    for i in range(1, len(lines), 2):
        n = int(lines[i])
        lighthouses = list(map(int, lines[i+1].split()))
        print(solve(lighthouses))


@lru_cache(maxsize=None)
def op(num):
    result = 0
    while num:
        result += pow(num % 10, 2)
        num //= 10
    return result


def solve(lighthouses):
    seen = set()
    curr = tuple(lighthouses)
    while curr not in seen:
        seen.add(curr)
        lighthouses = list(map(op, lighthouses))
        curr = tuple(lighthouses)

    counts = Counter(curr)
    result = 0
    for count in counts.values():
        result += comb(count, 2)
    return result


if __name__ == "__main__":
    main()
