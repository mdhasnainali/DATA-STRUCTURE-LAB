import math

def get_maximum(arr):
    max = arr[0]
    for i in arr:
        if(i > max):
            max = i;
    return max

def get_minimum(arr):
    min = arr[0]
    for i in arr:
        if(i < min):
            min = i;
    return min

def get_average(arr):
    length = len(arr)
    sum = get_total(arr)
    average = sum / length
    return average

def get_total(arr):
    sum = 0
    for i in arr:
        sum = sum + i
    return sum

def get_sin_value(x):
    return math.sin(math.radians(x))



array = [3,24,46,2,56,24,12,646,12,35,464,121]
print(get_maximum(array))
print(get_minimum(array))
print(get_total(array))
print(get_average(array))
print(get_sin_value(30))


