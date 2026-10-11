import sys
from collections import Counter


def main():
    lines = sys.stdin.read().splitlines()
    t = int(lines[0])

    for i in range(1, len(lines), 2):
        n, k = map(int, lines[i].split())
        cards = sorted(map(int, lines[i+1].split()))
        print(solve(n, k, cards))


def solve(n, k, cards):
    counts = Counter(cards)
    smallest_not_2k = float('inf')
    left = 0
    right = max(cards) + 1
    for curr in range(left, right):
        if counts[curr] < 2 * k:
            smallest_not_2k = curr
            break

    if counts[smallest_not_2k] == 2 * k - 1:
        return "YES"
    else:
        return "NO"


if __name__ == "__main__":
    main()
