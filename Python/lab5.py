# import calendar
# year = int(input("Enter a year: "))
# month = int(input("Enter a month (1-12): "))
# print(calendar.month(year, month))
# # print(calendar.calendar(year))

# from datetime import datetime
# now= datetime.now()
# current_time = now.strftime("%H:%M:%S") 
# print("Current Time =", current_time) it only show system current time 

# import random

# userno = int(input("Enter a number: "))
# secret = random.randint(1, 100)
# attemps = 0
# while True:
#     if(secret<userno):
#         print("Your number is less than the secret number.")
#     elif(secret>userno):
#         print("Your number is greater than the secret number.")
#     else:
#         print("Congrats! Your number is equal to the secret number.")
#     break
# a= random.randint(10001,99999)
# print(a)

# Horoscope program using birth date
month = int(input("Enter your birth month (1-12): "))
day = int(input("Enter your birth day (1-31): "))

if (month == 3 and day >= 21) or (month == 4 and day <= 19):
    sign = "Aries"
elif (month == 4 and day >= 20) or (month == 5 and day <= 20):
    sign = "Taurus"
elif (month == 5 and day >= 21) or (month == 6 and day <= 20):
    sign = "Gemini"
elif (month == 6 and day >= 21) or (month == 7 and day <= 22):
    sign = "Cancer"
elif (month == 7 and day >= 23) or (month == 8 and day <= 22):
    sign = "Leo"
elif (month == 8 and day >= 23) or (month == 9 and day <= 22):
    sign = "Virgo"
elif (month == 9 and day >= 23) or (month == 10 and day <= 22):
    sign = "Libra"
elif (month == 10 and day >= 23) or (month == 11 and day <= 21):
    sign = "Scorpio"
elif (month == 11 and day >= 22) or (month == 12 and day <= 21):
    sign = "Sagittarius"
elif (month == 12 and day >= 22) or (month == 1 and day <= 19):
    sign = "Capricorn"
elif (month == 1 and day >= 20) or (month == 2 and day <= 18):
    sign = "Aquarius"
elif (month == 2 and day >= 19) or (month == 3 and day <= 20):
    sign = "Pisces"
else:
    sign = "Invalid date"

if sign != "Invalid date":
    print(f"Your zodiac sign is {sign}.")
    print("Today's horoscope: Good things are coming your way!")
else:
    print("Invalid date entered.")

# import braintree 
# # Initialize Braintree with your credentials
# gateway = braintree.BraintreeGateway(
#     braintree.Configuration(
#         braintree.Environment.Sandbox,
#         merchant_id="your_merchant_id",
#         public_key="your_public_key",
#         private_key="your_private_key"
#     )
# )
