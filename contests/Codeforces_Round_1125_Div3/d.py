import sys


def main():
    lines = sys.stdin.read().splitlines()
    t = int(lines[0])
    i = 1
    while i < len(lines):
        n, k = map(int, lines[i].split())
        i += 1
        labs = []
        for _ in range(n):
            a, b, c = map(int, lines[i].split())
            labs.append([a, b, c])
            i += 1
        print(solve(n, k, labs))


def solve(n, k, labs):
    def check(target):
        count = 0
        for a, b, c in labs:
            _sum = a+b+c
            if _sum >= target:
                continue
            diff = target - _sum
            if a <= b <= c:
                if a == c:
                    return False
                diff += 2 * min(b-a+1, c-b+1)
            count += diff
            if count > k:
                return False
        return True

    labs.sort(key=sum)
    left = sum(labs[0])
    right = left+k
    while left <= right:
        mid = left + (right-left) // 2
        if check(mid):
            left = mid+1
        else:
            right = mid-1

    return right


if __name__ == "__main__":
    main()
