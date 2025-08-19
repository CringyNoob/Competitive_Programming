
# Tuple unpacking swap

# x, y = 5, 10
# x, y = y, x
# print(f"{x}, {y}")

#List Sclicing

# nums = [1,2,3,4,5,6,7,8]
# print(nums[-3:]) #last 3 elements
# print(nums[::-1]) #reverse the list
# print(nums[1::2]) #every second element starting from index 1

#Unique Words in a String

# line = input("Enter a line: ")
# unique_words = sorted(set(line.split()))
# print(f"Unique Words: {unique_words}")

#Squares and cubes

result = [[n, n**2, n**3] for n in range(1,6)]
print(result)
flatten = [x for sub in result for x in sub]
print(flatten)


