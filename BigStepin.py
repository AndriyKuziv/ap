n, k = map(int, input().split())

res = str(2**n)
print(res[(len(res))-1-k])
