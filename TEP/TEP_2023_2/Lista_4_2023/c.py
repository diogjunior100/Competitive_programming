def solve(s, t): 
    s = list(s)
    t = list(t)

    print(max(abs(ord(s[0]) - ord(t[0])), abs(int(s[1]) - int(t[1]))))

    while s != t:
        if s[0] < t[0]:
            print("R", end="")
            s[0] = chr(ord(s[0]) + 1)
        elif s[0] > t[0]:
            print("L", end="")
            s[0] = chr(ord(s[0]) - 1)
        if s[1] < t[1]:
            print("U", end="")
            s[1] = str(int(s[1]) + 1)
        elif s[1] > t[1]:
            print("D", end="")
            s[1] = str(int(s[1]) - 1)

        print()

def main():
    s = input() 
    t = input()

    solve(s, t)

main()
