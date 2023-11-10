n = int(input())
count = n

for i in range(count, 920, 1):

    new_n = str(i)
    new_n = list(new_n)

    op = multi = int(new_n[0]) * int(new_n[1])

    if op == int(new_n[2]):
        print(i)
        exit()



