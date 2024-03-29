# Getting input
units = int(input("Please enter the number of units consumed: "))
print("\n")

# Calculating Cost (if...elif...else)
if units <= 100:
  unit_total = units*1.5
  charges = 25
elif units > 100 and units <= 200:
  unit_total = (100*1.5)+(units-100)*2.5
  charges = 50
elif units > 200 and units <= 300:
  unit_total = (100*1.5)+(100*2.5)+(units-200)*4
  charges = 75
elif units > 300 and units <= 400:
  unit_total = (100*1.5)+(100*2.5)+(100*4)+(units-300)*5
  charges = 100
else:
  unit_total = (100*1.5)+(100*2.5)+(100*4)+(100*5)+(units-400)*8
  charges = 500

# Output
print("\n        ~~~~~~~~~ Tamil Nadu Electricity Board ~~~~~~~~~        ")
print("\n                           Coimbatore                          ")
print("\n Date: 17.01.2022")
print("\n Consumer Number: 2324255")
print("\n Name: Joshua Daniel S")
print("\n Units Consumed: ", units)
print("-----------------------------------------------------------------")
print("\n Units Charges in Rs. : ", unit_total)
print("\n Meter Charges in Rs. : ", charges)
print("\n Additional Charge in Rs. : ", charges)
print("\n")
print("Total Charges in Rs. :", unit_total + charges)
print("\n")
print("                   ***** Save Electricity *****                  ")
