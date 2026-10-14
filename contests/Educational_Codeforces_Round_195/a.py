import sys


def main():
    lines = sys.stdin.read().splitlines()
    t = int(lines[0])

    for i in range(1, t + 1):
        a, b = map(int, lines[i].split())
        print(solve(a, b))


def solve(cheese, sausage):
    sandwiches = min(sausage, cheese - sausage)
    if sandwiches < 1:
        return -1
    return sandwiches


if __name__ == "__main__":
    main()
