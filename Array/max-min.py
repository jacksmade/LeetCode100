import numpy
array=[1,20,3,5,6]
n=len(array)
temp=array[n-1]
for i in range(n - 1, 0, -1):
        array[i] = array[i - 1]
        print(i)

array[0]=temp
print(array)

    