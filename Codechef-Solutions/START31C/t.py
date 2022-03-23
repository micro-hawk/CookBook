t = int(input())
for _ in range(t):
    a,b,c = map(int, input().split(' '))
    if abs(a-b) <= c:
        print("\nYES")
    else:
        print("NO")