import sys


def main():
    lines = sys.stdin.read().splitlines()
    t = int(lines[0])

    for i in range(1, len(lines)):
        n = int(lines[i])
        cost, a = solve(n)
        print(cost)
        print(*a)


def solve(n):
    counts = {}
    for i in range(n+1):
        counts[i] = 0
    counts[0] = n
    counts[-1] = 1
    # 11, 2, 3, 22, 111,  4, 5, 33,
    # 1
    # 2 11
    # 3 111
    # 4 22 1111
    curr_max = 1
    curr_add = 1
    for i in range(n):
        while curr_add <= curr_max and (counts[curr_add] + 1) * curr_add > curr_max:
            curr_add += 1
        if curr_add > curr_max:
            curr_max += 1
            curr_add = 1
        counts[curr_add] += 1
        counts[curr_add-1] -= 1
        curr_add = max(1, curr_add-1)

    result = []
    curr = 1
    for i in range(1, n+1):
        for j in range(counts[i]):
            result += [curr] * i
            curr += 1

    return curr_max, result


if __name__ == "__main__":
    main()
