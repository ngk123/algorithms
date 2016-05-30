n = input()
m = floor(sqrt(n))
output(m)
x = 1
y = m
    do:
        x = (n - y * y) / x
        output((m + y) / x)
        y = m - (m + y) % x
    while (x > 1)
