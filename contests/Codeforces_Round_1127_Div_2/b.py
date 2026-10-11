import sys


def main():
    lines = sys.stdin.read().splitlines()
    t = int(lines[0])

    for i in range(1, len(lines), 2):
        n = int(lines[i])
        a = list(map(int, lines[i+1].split()))
        print(solve(n, a))


def solve(n, a):
    max_prefix = a[0]
    min_prefix = a[0]
    result = a[0]
    for i in range(1, n):
        result = max(result, a[i]+max(abs(max_prefix), abs(min_prefix)))
        max_prefix = max(a[i], a[i]+max_prefix, a[i]+2*max_prefix)
        min_prefix = min(a[i], a[i]+min_prefix, a[i]+2*min_prefix)

    return result


if __name__ == "__main__":
    main()
