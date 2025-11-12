#https://esep.cpfed.kz/problem/qual24c




import sys, os, io
if os.path.exists("input.txt"):
    sys.stdin = open("input.txt", "r")
    input = sys.stdin.readline
else:
    input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline


def solve():
    n = input().strip()
    digits = [int(x) for x in n]
    s = sum(digits)
    r = s % 3

    if r == 0:
        print(0)
        return

    cnt1 = sum(1 for x in digits if x % 3 == 1)
    cnt2 = sum(1 for x in digits if x % 3 == 2)
    length = len(digits)

    if r == 1:
        if cnt1 >= 1 and length > 1:
            print(1)
        elif cnt2 >= 2 and length > 2:
            print(2)
        else:
            print(length - 1)  
    else: 
        if cnt2 >= 1 and length > 1:
            print(1)
        elif cnt1 >= 2 and length > 2:
            print(2)
        else:
            print(length - 1)

def main():
    # T = int(input())
    # for _ in range(T):
        solve()

main()
