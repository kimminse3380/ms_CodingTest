n = int(input())
arr = list(map(int, input().split()))
arr.sort()
result = 0
count = 0
for i in range(len(arr)):
    count += 1
    if arr[i] == count:
        result += 1
print(result)