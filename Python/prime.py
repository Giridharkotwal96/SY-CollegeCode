num = int(input("Enter the number : "))

if(num>1):
    flag = True

    for i in range(2,num):
        if(num %i == 0):
            flag = False

if(flag):
    print("The number is prime")
else:
    print("Number is not prime")

