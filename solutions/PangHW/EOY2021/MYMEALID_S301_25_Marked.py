COMBO_A_COST  = [7.90, 11.10, 10.50, 13.80, 28.30, 16.25, 24.90, 31.20, 9.90, 19.80]
COMBO_B_COST  = [5.00, 4.75, 4.60, 3.80, 2.50]

total_cost = 0                                              #Q9 3/4
again = True

while again:
    meal_id = input("Enter Meal ID: ")
    while meal_id == "" or len(meal_id) != 3 or not (meal_id[0] == "A" or meal_id[0] == "B") or not meal_id[1:].isdigit() or int(meal_id[1:]) < 1:
                                                            #Q8 1/4
        print("Invalid Meal ID. Enter Meal ID in format: X##, where X is an alphabet A or B and ## is a 2 digit number, starting with 01, with leading 0 if less than 10")
                                                            #Q8 2/4
        meal_id = input("Enter Meal ID: ")                  #Q8 3/4

    meal_group = meal_id[0]
    meal_num = meal_id[1:3]
    if meal_group == "A":
        cost = COMBO_A_COST [int(meal_num)-1]   
    else:
        cost = COMBO_B_COST [int(meal_num)-1]

    print("The cost of meal with Meal ID of {} is ${:.2f}".format(meal_id, cost))   #Q7 2/2
    total_cost += cost

    again = True if input("Would you like to add an addtional Meal ID? (Y/N) ").upper() == "Y" else False
                                                            #Q9 1/4, 2/4

print("The total cost is: ${:.2f}".format(total_cost))      #Q9 4/4

#Q7 2/2
#Q8 3/4, Did not validate the range of digits, numbers beyond len of list will result in run time error
#Q9 4/4
