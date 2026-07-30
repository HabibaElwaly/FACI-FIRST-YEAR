# ==========================================
# FCAI-CU - First Year Programming Labs
# Python Solutions Sheet
# ==========================================

# ------------------------------------------
# Problem A: Brick AtCoder abc186_a
# ------------------------------------------
data = input().split()
n = int(data[0])
w = int(data[1])
print(n // w)


# ------------------------------------------
# Problem B: Sum of squares EOlymp 519
# ------------------------------------------
data = input().split()
a = int(data[0])
b = int(data[1])
print(a**2 + b**2)


# ------------------------------------------
# Problem C: Watermelon CodeForces 4A
# ------------------------------------------
w = int(input())
if w % 2 == 0 and w > 2:
    print("YES")
else:
    print("NO")


# ------------------------------------------
# Problem E: Lucky? CodeForces 1676A
# ------------------------------------------
s = input()
upper_count = 0
lower_count = 0
for char in s:
    if char.isupper():
        upper_count += 1
    else:
        lower_count += 1
if upper_count > lower_count:
    print(s.upper())
else:
    print(s.lower())


# ------------------------------------------
# Problem F: Word CodeForces 59A
# ------------------------------------------
target = "codeforces"
t = int(input())
for i in range(t):
    s = input()
    diff_count = 0
    for j in range(10):
        if s[j] != target[j]:
            diff_count += 1
    print(diff_count)


# ------------------------------------------
# Problem G: Love Story CodeForces 1829A
# ------------------------------------------
t = int(input())
for i in range(t):
    s = input()
    if s.lower() == "yes":
        print("YES")
    else:
        print("NO")


# ------------------------------------------
# Problem H: YES or YES? CodeForces 1703A
# ------------------------------------------
s = input()
t = input()
if s == t[::-1]:
    print("YES")
else:
    print("NO")


# ------------------------------------------
# Problem I: Translation CodeForces 41A
# ------------------------------------------
n = int(input())
a = input().split()
for i in range(n):
    a[i] = int(a[i])
found = False
for i in range(n):
    for j in range(n):
        for k in range(n):
            if i != j and i != k and j != k:
                if a[i] == a[j] + a[k]:
                    print(i + 1, j + 1, k + 1)
                    found = True
                    break
        if found:
            break
    if found:
        break
if not found:
    print("-1")


# ------------------------------------------
# Problem J: Worms Evolution CodeForces 31A
# ------------------------------------------
t = int(input())
for i in range(t):
    n = int(input())
    s = input().split()
    a = []
    for x in s:
        a.append(int(x))
    possible = True
    for first_index in range(n):
        for second_index in range(first_index + 1, n):
            if a[first_index] == a[second_index]:
                possible = False
                break
        if not possible:
            break
    if possible:
        print("YES")
    else:
        print("NO")


# ------------------------------------------
# Problem K: Increasing CodeForces 1742B
# ------------------------------------------
t = int(input())
for i in range(t):
    n_val = int(input())
    s_vals = input().split()
    a_list = [int(x) for x in s_vals]
    possible = True
    for first_index in range(n_val):
        for second_index in range(first_index + 1, n_val):
            if a_list[first_index] == a_list[second_index]:
                possible = False
                break
        if not possible:
            break
    if possible:
        print("YES")
    else:
        print("NO")


# ------------------------------------------
# Problem L: Stripes CodeForces 1742C
# ------------------------------------------
t = int(input())
for i in range(t):
    input()
    ans = "B"
    for j in range(8):
        row = input()
        if row == "RRRRRRRR":
            ans = "R"
    print(ans)
