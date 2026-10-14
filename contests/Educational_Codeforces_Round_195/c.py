import sys


def main():
    lines = sys.stdin.read().splitlines()
    t = int(lines[0])

    for i in range(1, len(lines), 2):
        n, k = map(int, lines[i].split())
        a = list(map(int, lines[i + 1].split()))

        print(solve(n, k, a))


def solve(n, k, a):
    result = 0
    prefix_mod = 0
    counts = [0] * k
    mods = [0] * n

    for i, x in enumerate(a):
        prefix_mod = (prefix_mod + x) % k
        mods[i] = prefix_mod

        j = i - k - 1
        if j == -1:
            counts[0] += 1
        elif j >= 0:
            counts[mods[j]] += 1

        result += counts[prefix_mod]

    return result


if __name__ == "__main__":
    main()
