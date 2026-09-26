import sys


def main():
    lines = sys.stdin.read().splitlines()
    t = int(lines[0])

    for i in range(1, len(lines), 2):
        n, k = map(int, lines[i].split())
        nums = list(map(int, lines[i+1].split()))
        print(solve(n, k, nums))


def solve(n, k, nums: list):
    if n < k:
        return 0

    return middle(n, k, nums) + sides(n, k, nums)


def middle(n, k, nums):
    if n < 2 * (k-1):
        return 0

    return sum(nums[k-1: n-k+1])


def sides(n, k, nums):
    result = 0
    steps = min(k - 1, n - k + 1)
    for i in range(steps):
        result += max(nums[i], nums[n-1-i])
    return result


if __name__ == "__main__":
    main()


# SLOW
# def solve(n, k, nums: list):
#     if n < k:
#         return 0

#     temp1 = nums.pop(k-1)
#     option1 = temp1 + solve(n-1, k, nums)
#     nums.insert(k-1, temp1)

#     temp2 = nums.pop(n-k)
#     option2 = temp2 + solve(n-1, k, nums)
#     nums.insert(n-k, temp2)

#     return max(option1, option2)
