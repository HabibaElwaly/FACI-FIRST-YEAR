# ==========================================
# FCAI-CU - First Year Programming Labs
# Python Solutions Sheet
# ==========================================

# ------------------------------------------
# Problem 1: Division / Floor Division
# ------------------------------------------
data = input().split()
n = int(data[0])
w = int(data[1])
print(n // w)


# ------------------------------------------
# Problem 2: Sum of Squares (a^2 + b^2)
# ------------------------------------------
data = input().split()
a = int(data[0])
b = int(data[1])
print(a**2 + b**2)


# ------------------------------------------
# Problem 3: Watermelon (Codeforces)
# ------------------------------------------
w = int(input())
if w % 2 == 0 and w > 2:
    print("YES")
else:
    print("NO")


# ------------------------------------------
# Problem 4: Lucky Ticket Check
# ------------------------------------------
t = int(input())
for i in range(t):
    s = input()
    sum1 = int(s[0]) + int(s[1]) + int(s[2])
    sum2 = int(s[3]) + int(s[4]) + int(s[5])
    if sum1 == sum2:
        print("YES")
    else:
        print("NO")


# ------------------------------------------
# Problem 5: Word Case Adjustment
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
# Problem 6: Codeforces Checking / Character Diff
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
# Problem 7: Yes or Yes Check
# ------------------------------------------
t = int(input())
for i in range(t):
    s = input()
    if s.lower() == "yes":
        print("YES")
    else:
        print("NO")


# ------------------------------------------
# Problem 8: Translation (Reversed String Check)
# ------------------------------------------
s = input()
t = input()
if s == t[::-1]:
    print("YES")
else:
    print("NO")


# ------------------------------------------
# Problem 9: Sum of Two Elements Equals Third (Indices Finder)
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
# Problem 10: Check Unique / Distinct Elements
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
# Problem 11: Grid Row Letter Detection (R or B)
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
