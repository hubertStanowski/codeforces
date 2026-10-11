import sys


def main():
    lines = sys.stdin.read().splitlines()
    t = int(lines[0])

    for i in range(1, t + 1):
        a, b = map(int, lines[i].split())
        print(solve(a, b))


def solve(a, b):
    if (a - b) % 2 == 0 and b <= a:
        return a
    elif b <= a + 1:
        return a + 1
    return -1


if __name__ == "__main__":
    main()
