def bubble(array):
    n=len(array)
    for i in range(0,n):
        swapped=False
        for j in range(0,n-1):
            if array[j]>array[j+1]:
                array[j+1],array[j]=array[j],array[j+1]
                swapped=True
        if swapped==False:
            break

def printarr(arr):
    for i in range(len(array)):
        print(array[i])
        
    

array=[3,9,1,0,8,11,-9,-2]
bubble(array)
printarr(array)