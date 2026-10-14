import sys


def main():
    lines = sys.stdin.read().splitlines()
    t = int(lines[0])

    for i in range(1, t + 1):
        s = lines[i]
        print(solve(s))


def solve(s):
    runs = []
    for c in s:
        if not runs or runs[-1][0] != c:
            runs.append([c, 1])
        else:
            runs[-1][1] += 1

    can_add = any(length >= 3 for _, length in runs)
    can_remove = any(length == 1 for _, length in runs[1:-1])
    return 1 + can_add + can_remove


if __name__ == "__main__":
    main()
