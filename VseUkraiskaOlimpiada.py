from queue import LifoQueue
str1 = input()

length = len(str1)
count = 0

for i in str1:
    if i=='(':
        count+=1

print(count)

stack = LifoQueue()

for i in range(length):
    if str1[i]== '(':
        stack.put(i+1)
    elif str1[i]== ')':
        print(str(stack.get())+" "+str(i+1))
