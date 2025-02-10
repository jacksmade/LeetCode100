import math
def sortf(arr,M):
    sort_list=sorted(arr)
    l=len(arr)
    diff = math.inf
    for i in range(l-M+1):
            current_diff = sort_list[i + M - 1] - sort_list[i]
            if current_diff < diff:
                    diff = current_diff
    return diff

arr=[3, 4, 1, 9, 56]
#[1,3,4,7,9,9,12,56]
print(sortf(arr,5))