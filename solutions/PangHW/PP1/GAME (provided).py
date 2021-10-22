game = input("Enter the number of hours gaming: ")
game = int(game)
stars = max(3 - game // 3, 0)
print("Congratulations! You earned {} star(s) this week!".format(stars))
