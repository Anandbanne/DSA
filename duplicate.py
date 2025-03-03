a=[1,1,1,2,2,2,2,2,3,4,4,4,4,4,5]
i=0
for j in range(len(a)):
    if(a[i] != a[j]):
        a[i+1] = a[j]
        i+=1
print(*a,"list")
print(a[:i+1])    