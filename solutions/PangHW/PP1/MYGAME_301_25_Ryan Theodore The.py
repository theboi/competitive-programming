game = input("Enter the number of hours gaming: ")

while float(game) % 1 != 0 or int(game) < 0:
  print("Invalid number of gaming hours, positive integers only.")
  game = input("Enter the number of hours gaming: ")

game = int(game)

study = int(input("Enter the number of hours studying: "))

stars = max(5 - (game // 3), 0)

if study <= 15 and stars == 5:
  stars -= 1

if stars > 0:
  print("Congratulations! You earned {} star(s) this week!".format(stars))
else:
  print("Try harder the following week... You earned {} star(s) this week.".format(stars))
