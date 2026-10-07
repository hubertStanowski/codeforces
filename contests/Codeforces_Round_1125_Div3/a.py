import sys


def main():
    lines = sys.stdin.read().splitlines()
    t = int(lines[0])
    cases = []
    for line in lines[1:]:
        x0, y0, r = map(int, line.split())
        print(x0+r, y0)


if __name__ == "__main__":
    main()
