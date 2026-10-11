import sys


def main():
    lines = sys.stdin.read().splitlines()
    t = int(lines[0])

    for i in range(1, len(lines), 2):
        n = int(lines[i])
        a = list(map(int, lines[i+1].split()))
        print(solve(n, a))


def solve(n, a):
    position = 0
    for curr in reversed(a):
        position = curr + (curr-position)

    return position // 2


if __name__ == "__main__":
    main()
