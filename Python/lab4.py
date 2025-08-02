# Display the pattern of A to Z 

# n = 5
# for i in range(0, n+1):
#     for j in range(0, i+1):
#         print(chr(65 + j), end=' ')
#     print() 

# n = 5
# for i in range(0, n+1):
#     for j in range(0, i+1):
#         print(chr(65 + j).lower() , end=' ')
#     print() 

n = 5
for i in range(1, n+1):
    for num in range(1, i+1):
        print(num, end='')
    print(' ', end='')
    for ch in range(i):
        print(chr(65 + ch).lower(), end='')
    print()

# for num in range(1, 1001):
#     digits = [int(d) for d in str(num)]
#     size = len(digits)
#     if sum(d**size for d in digits) == num:
#         print(num)

# n = 5
# for i in range(1, n+1):
#     print(' ' * (n - i) + '*' * (2 * i - 1))

# n = 11  # Size of the face
# for i in range(n):
#     for j in range(n):
#         # Draw the outer circle
#         if ((i-5)**2 + (j-5)**2 <= 25):
#             # Eyes
#             if (i == 3 and (j == 3 or j == 7)):
#                 print('O', end='')  # Eyes
#             # Mouth
#             elif (i == 7 and 3 < j < 7):
#                 print('_', end='')  # Mouth
#             else:
#                 print('*', end='')
#         else:
#             print(' ', end='')
#     print()