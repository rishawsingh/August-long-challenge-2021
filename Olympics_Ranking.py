T = int(input())
for i in range(T):
    a, b, c, d, e, f = map(int, input().split())
    first_country = a + b + c 
    second_country = d + e + f
    if first_country > second_country:
        print(1)
    else:
        print(2)